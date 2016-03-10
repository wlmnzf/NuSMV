FILE(REMOVE_RECURSE
  "CMakeFiles/tutorial"
  "tutorial.pdf"
  "main.bbl"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/tutorial.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
