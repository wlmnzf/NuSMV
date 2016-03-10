
/**************************************************************************************************

Solver_C.C

C-wrapper for Solver.C

  This file is part of NuSMV version 2. 
  Copyright (C) 2007 by FBK-irst. 
  Author: Roberto Cavada <cavada@fbk.eu>

  NuSMV version 2 is free software; you can redistribute it and/or 
  modify it under the terms of the GNU Lesser General Public 
  License as published by the Free Software Foundation; either 
  version 2 of the License, or (at your option) any later version.

  NuSMV version 2 is distributed in the hope that it will be useful, 
  but WITHOUT ANY WARRANTY; without even the implied warranty of 
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public 
  License along with this library; if not, write to the Free Software 
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA.

  For more information on NuSMV see <http://nusmv.fbk.eu>
  or email to <nusmv-users@fbk.eu>.
  Please report bugs to <nusmv-users@fbk.eu>.

  To contact the NuSMV development board, email to <nusmv@fbk.eu>. ]

**************************************************************************************************/


#include "SimpSolver.h"
extern "C" {
#include "Solver_C.h"
}

namespace {
using Minisat::lbool;
} // namespace

extern "C" MiniSat_ptr MiniSat_Create()
{
  Minisat::SimpSolver *s = new Minisat::SimpSolver();
  s->default_polarity = l_True;
  return (MiniSat_ptr)s;
}

extern "C"void MiniSat_Delete(MiniSat_ptr ms)
{
  delete (Minisat::SimpSolver *)ms;
}

extern "C" int MiniSat_Nof_Variables(MiniSat_ptr ms)
{
  return ((Minisat::SimpSolver *)ms)->nVars();
}

extern "C" int MiniSat_Nof_Clauses(MiniSat_ptr ms)
{
  return ((Minisat::SimpSolver *)ms)->nClauses();
}

/* variables are in the range 1...N */
extern "C" int MiniSat_New_Variable(MiniSat_ptr ms)
{
  /* Actually, minisat used variable range 0 .. N-1,
     so in all function below there is a convertion between
     input variable (1..N) and internal variables (0..N-1)
  */	
  Minisat::Var var = ((Minisat::SimpSolver *)ms)->newVar();
  ((Minisat::SimpSolver *)ms)->setFrozen(var, true);
  return var+1;
}


/*
 * Here clauses are in dimacs form, variable indexing is 1...N
 */
extern "C" int MiniSat_Add_Clause(MiniSat_ptr ms,
                                  int *clause_lits, int num_lits)
{
  int i;
  Minisat::vec<Minisat::Lit> cl;
  for(i = 0; i < num_lits; ++i) {
    const int lit = clause_lits[i];
    assert(abs(lit) > 0);
    assert(abs(lit) <= MiniSat_Nof_Variables((Minisat::SimpSolver*)ms));
    int var = abs(lit) - 1;
    cl.push((lit > 0) ? Minisat::mkLit(var) : ~ Minisat::mkLit(var));
  }
  ((Minisat::SimpSolver *)ms)->addClause(cl);

  if(((Minisat::SimpSolver *)ms)->okay()) return 1;
  return 0;
}

extern "C" int MiniSat_Solve(MiniSat_ptr ms)
{
  bool ret = ((Minisat::SimpSolver *)ms)->solve();
  if(ret) return 1;
  return 0;
}

/*
 * Here the assumption is in "dimacs form", variable indexing is 1...N
 */
extern "C" int MiniSat_Solve_Assume(MiniSat_ptr ms,
				    int nof_assumed_lits,
				    int *assumed_lits)
{
  int i;
  Minisat::vec<Minisat::Lit> cl;
  assert(((Minisat::SimpSolver*)0) != ((Minisat::SimpSolver*)ms)); 
  Minisat::SimpSolver& solver = *((Minisat::SimpSolver*)ms);

  solver.simplify();
  if(solver.okay() == false) return 0;

  assert(nof_assumed_lits >= 0);
  for(i = 0; i < nof_assumed_lits; ++i) {
    const int lit = assumed_lits[i];
    assert(abs(lit) > 0);
    assert(abs(lit) <= MiniSat_Nof_Variables((Minisat::SimpSolver*)ms));
    int var = abs(lit) - 1;
    cl.push((lit > 0) ? Minisat::mkLit(var) : ~Minisat::mkLit(var));
  }

  if (solver.solve(cl)) return 1;
  return 0;
}

extern "C" int MiniSat_simplifyDB(MiniSat_ptr ms)
{
  ((Minisat::SimpSolver *)ms)->simplify();
  if(((Minisat::SimpSolver *)ms)->okay()) return 1;
  return 0;
}

/*
 * Here variables are numbered 1...N
 */
extern "C" int MiniSat_Get_Value(MiniSat_ptr ms, int var_num)
{
  assert(var_num > 0);
  if(var_num > MiniSat_Nof_Variables(ms)) return -1;
  /* minisat assigns all variables. just check */
  assert(((Minisat::SimpSolver *)ms)->model[var_num-1] != l_Undef); 
  
  if(((Minisat::SimpSolver *)ms)->model[var_num-1] == l_True) return 1;
  return 0;
}

extern "C" int MiniSat_Get_Nof_Conflict_Lits(MiniSat_ptr ms)
{
  assert(((Minisat::SimpSolver*)0) != ((Minisat::SimpSolver*)ms)); 
  Minisat::SimpSolver& solver = *((Minisat::SimpSolver*)ms);

  return solver.conflict.size();
}

extern "C" void MiniSat_Get_Conflict_Lits(MiniSat_ptr ms, int* conflict_lits)
{
  assert(((Minisat::SimpSolver*)0) != ((Minisat::SimpSolver*)ms)); 
  Minisat::SimpSolver& solver = *((Minisat::SimpSolver*)ms);

  Minisat::LSet& cf = solver.conflict;

  for (int i = 0; i < cf.size(); ++i) {
    int v = Minisat::var(~cf[i]);
    int s = Minisat::sign(~cf[i]);
    assert(v != Minisat::var_Undef);
    conflict_lits[i] = (s == 0) ? (v+1) : -(v+1);
  }
}

/** mode can be  polarity_user, polarity_rnd */
extern "C" void MiniSat_Set_Polarity_Mode(MiniSat_ptr ms, int mode)
{
  assert(((Minisat::SimpSolver*)0) != ((Minisat::SimpSolver*)ms)); 
  assert(__polarity_unsupported != mode); 
  Minisat::SimpSolver& solver = *((Minisat::SimpSolver*)ms);  
  if (polarity_rnd == mode) {
    solver.rnd_pol = true;
    solver.default_polarity = l_Undef;
  }
  else {
    // assert(polarity_user == mode);
    solver.rnd_pol = false;
    switch (mode) {
    case polarity_false:
      solver.default_polarity = l_True;
      break;
    case polarity_true:
      solver.default_polarity = l_False;
      break;
    default: // polarity_user
      solver.default_polarity = l_Undef;
      break;
    }
  }
}

extern "C" int MiniSat_Get_Polarity_Mode(MiniSat_ptr ms)
{
  assert(((Minisat::SimpSolver*)0) != ((Minisat::SimpSolver*)ms)); 
  Minisat::SimpSolver& solver = *((Minisat::SimpSolver*)ms);  
  //return solver.rnd_pol ? polarity_rnd : polarity_user;
  if (solver.rnd_pol) {
    return polarity_rnd;
  } else if (solver.default_polarity == l_True) {
    return polarity_false;
  } else if (solver.default_polarity == l_False) {
    return polarity_true;
  } else {
    return polarity_user;
  }
}

extern "C" void MiniSat_Set_Random_Seed(MiniSat_ptr ms, double seed)
{
  assert(((Minisat::SimpSolver*)0) != ((Minisat::SimpSolver*)ms)); 
  Minisat::SimpSolver& solver = *((Minisat::SimpSolver*)ms);
  solver.random_seed = seed;
}


// NuSMV: PREF MOD
/* variables are in the range 1...N */
extern "C" void MiniSat_Set_Preferred_Variable(MiniSat_ptr ms, int x)
{
  /* Actually, minisat used variable range 0 .. N-1,
     so in all function below there is a convertion between
     input variable (1..N) and internal variables (0..N-1)
  */
  ((Minisat::SimpSolver *)ms)->addPreferred((Minisat::Var) x);
}

extern "C" void MiniSat_Clear_Preferred_Variables(MiniSat_ptr ms)
{

  ((Minisat::SimpSolver *)ms)->clearPreferred();
}
// NuSMV: PREF MOD END
