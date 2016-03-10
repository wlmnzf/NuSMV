FILE(REMOVE_RECURSE
  "CMakeFiles/user-man"
  "nusmv.pdf"
  "cmdpo.pdf"
  "main.bbl"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/user-man.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
