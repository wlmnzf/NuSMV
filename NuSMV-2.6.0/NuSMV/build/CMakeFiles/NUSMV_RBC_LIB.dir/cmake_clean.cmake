FILE(REMOVE_RECURSE
  "lib/libnusmvrbc.pdb"
  "lib/libnusmvrbc.a"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/NUSMV_RBC_LIB.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
