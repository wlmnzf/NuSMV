FILE(REMOVE_RECURSE
  "lib/libnusmvcore.pdb"
  "lib/libnusmvcore.a"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/NUSMV_CORE_LIB.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
