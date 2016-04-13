// TODO TEST Welche Header sind wirklich noetig?

#include "nusmv/core/dd/DDMgr.h"
#include "nusmv/core/utils/utils.h"
#include "nusmv/core/utils/array.h"
#include "nusmv/core/utils/avl.h"
#include "nusmv/core/node/node.h"
#include "cudd/cudd.h"
#include "nusmv/core/opt/OptsHandler.h"
#include "nusmv/core/cinit/NuSMVEnv.h"


static int
ddDoDumpFactoredForm(
  DdManager * dd,
  DdNode * f,
  FILE * fp,
  char ** names);

int
Cudd_DumpFormula(
  DdManager * dd /* manager */,
  int  n /* number of output nodes to be dumped */,
  DdNode ** f /* array of output nodes to be dumped */,
  char ** inames /* array of input names (or NULL) */,
  char ** onames /* array of output names (or NULL) */,
  FILE * fp /* pointer to the dump file */);

int dd_dump_factored_form(
  DDMgr_ptr dd /* manager */,
  int  n /* number of output nodes to be dumped */,
  dd_ptr * f /* array of output nodes to be dumped */,
  const char ** inames /* array of input names (or NULL) */,
  const char ** onames /* array of output names (or NULL) */,
  FILE * fp /* pointer to the dump file */);