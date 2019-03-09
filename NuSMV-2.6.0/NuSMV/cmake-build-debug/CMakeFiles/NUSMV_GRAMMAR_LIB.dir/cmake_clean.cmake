file(REMOVE_RECURSE
  "lib/libnusmvgrammar.pdb"
  "lib/libnusmvgrammar.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang C)
  include(CMakeFiles/NUSMV_GRAMMAR_LIB.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
