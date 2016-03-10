FILE(REMOVE_RECURSE
  "lib/libnusmvshell.pdb"
  "lib/libnusmvshell.a"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/NUSMV_SHELL_LIB.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
