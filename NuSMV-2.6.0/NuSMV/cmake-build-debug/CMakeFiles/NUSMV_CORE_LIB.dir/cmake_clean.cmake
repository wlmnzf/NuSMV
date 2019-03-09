file(REMOVE_RECURSE
  "lib/libnusmvcore.pdb"
  "lib/libnusmvcore.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang C)
  include(CMakeFiles/NUSMV_CORE_LIB.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
