// TODO Doku fuer Header Files durchgehen

static int
ddDoDumpFactoredForm_modified(
  DdManager * dd,
  DdNode * f,
  FILE * fp,
  char ** names);

int
Cudd_DumpFormula_modified(
  DDMgr_ptr dd_ptr,
  int  n /* number of output nodes to be dumped */,
  DdNode ** f /* array of output nodes to be dumped */,
  const char ** inames /* array of input names (or NULL) */,
  FILE * fp /* pointer to the dump file */);
