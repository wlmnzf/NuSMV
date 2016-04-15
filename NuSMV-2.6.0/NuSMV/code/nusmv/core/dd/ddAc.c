// TODO Kommentieren

#include "nusmv/core/dd/ddInt.h"
#include "nusmv/core/dd/DDMgr_private.h"

/**Function********************************************************************

  Synopsis    [Performs the recursive step of Cudd_DumpFactoredForm.]

  Description [Performs the recursive step of
  Cudd_DumpFactoredForm. Traverses the BDD f and writes a factored
  form for each node to the file pointed by fp in terms of the
  factored forms of the children. Constants are propagated, and
  absorption is applied.  f is assumed to be a regular pointer and
  ddDoDumpFActoredForm guarantees this assumption in the recursive
  calls.]

  SideEffects [None]

  SeeAlso     [Cudd_DumpFactoredForm]

******************************************************************************/
static int
ddDoDumpFactoredForm(
  DdManager * dd,
  DdNode * f,
  FILE * fp,
  char ** names)
{
    DdNode	*T, *E;
    int		retval;

#ifdef DD_DEBUG
    assert(!Cudd_IsComplement(f));
    assert(!Cudd_IsConstant(f));
#endif

    /* Check for abnormal condition that should never happen. */
    if (f == NULL)
        return(0);

    /* Recursive calls. */
    T = cuddT(f);
    E = cuddE(f);
    if (T != DD_FALSE(dd)) {
	if (E != DD_TRUE(dd)) {
	    if (names != NULL) {
		retval = fprintf(fp, "%s", names[f->index]);
	    } else {
		retval = fprintf(fp, "x%d", f->index);
	    }
	    if (retval == EOF) return(0);
	}
	if (T != DD_TRUE(dd)) {
	    retval = fprintf(fp, "%s(", E != DD_TRUE(dd) ? " & " : "");
	    if (retval == EOF) return(0);
	    retval = ddDoDumpFactoredForm(dd,T,fp,names);
	    if (retval != 1) return(retval);
	    retval = fprintf(fp, ")");
	    if (retval == EOF) return(0);
	}
	if (E == Cudd_Not(DD_TRUE(dd)) || E == DD_FALSE(dd)) return(1);
	retval = fprintf(fp, " | ");
	if (retval == EOF) return(0);
    }
    E = Cudd_Regular(E);
    if (T != DD_TRUE(dd)) {
	if (names != NULL) {
	    retval = fprintf(fp, "!%s", names[f->index]);
	} else {
	    retval = fprintf(fp, "!x%d", f->index);
	}
	if (retval == EOF) return(0);
    }
    if (E != DD_TRUE(dd)) {
	retval = fprintf(fp, "%s%s(", T != DD_TRUE(dd) ? " & " : "",
			 E != cuddE(f) ? "!" : "");
	if (retval == EOF) return(0);
	retval = ddDoDumpFactoredForm(dd,E,fp,names);
	if (retval != 1) return(retval);
	retval = fprintf(fp, ")");
	if (retval == EOF) return(0);
    }
    return(1);

} /* end of ddDoDumpFactoredForm */






/**
 * TODO Kommentar aendern
 * 
 /**Function********************************************************************

  Synopsis    [Writes factored forms representing the argument BDDs.]

  Description [Writes factored forms representing the argument BDDs.
  The format of the factored form is the one used in the genlib files
  for technology mapping in sis.  It returns 1 in case of success; 0
  otherwise (e.g., file system full).  Cudd_DumpFactoredForm does not
  close the file: This is the caller responsibility. Caution must be
  exercised because a factored form may be exponentially larger than
  the argument BDD.  If the argument inames is non-null, it is assumed
  to hold the pointers to the names of the inputs. Similarly for
  onames.]

  SideEffects [None]

  SeeAlso     [Cudd_DumpDot Cudd_PrintDebug Cudd_DumpBlif Cudd_DumpDaVinci
  Cudd_DumpDDcal]

******************************************************************************/
int
Cudd_DumpFormula(
  DdManager * dd /* manager */,
  int  n /* number of output nodes to be dumped */,
  DdNode ** f /* array of output nodes to be dumped */,
  char ** inames /* array of input names (or NULL) */,
  char ** onames /* array of output names (or NULL) */,
  FILE * fp /* pointer to the dump file */)
{
    int		retval;
    int		i;

    /* Call the function that really gets the job done. */
    for (i = 0; i < n; i++) {
	if (onames == NULL) {
	    retval = fprintf(fp, "f%d = ", i);
	} else {
	    retval = fprintf(fp, "%s = ", onames[i]);
	}
	if (retval == EOF) return(0);
	if (f[i] == DD_TRUE(dd)) {
	    retval = fprintf(fp, "TRUE");
	    if (retval == EOF) return(0);
	} else if (f[i] == Cudd_Not(DD_TRUE(dd)) || f[i] == DD_FALSE(dd)) {
	    retval = fprintf(fp, "FALSE");
	    if (retval == EOF) return(0);
	} else {
	    retval = fprintf(fp, "%s", Cudd_IsComplement(f[i]) ? "!(" : "");
	    if (retval == EOF) return(0);
	    retval = ddDoDumpFactoredForm(dd,Cudd_Regular(f[i]),fp,inames);
	    if (retval == 0) return(0);
	    retval = fprintf(fp, "%s", Cudd_IsComplement(f[i]) ? ")" : "");
	    if (retval == EOF) return(0);
	}
	retval = fprintf(fp, "%s", i == n-1 ? "" : "\n");
	if (retval == EOF) return(0);
    }

    return(1);

} /* end of Cudd_DumpFactoredForm */




int dd_dump_factored_form(
    DDMgr_ptr dd /* manager */,
    int n /* number of output nodes to be dumped */,
    dd_ptr *f /* array of output nodes to be dumped */,
    const char ** inames /* array of input names (or NULL) */,
    const char ** onames /* array of output names (or NULL) */,
    FILE * fp /* pointer to the dump file */)
{
    return(Cudd_DumpFormula(dd->dd, n, (DdNode **)f,
                                 (char**) inames, (char**) onames, fp));
}