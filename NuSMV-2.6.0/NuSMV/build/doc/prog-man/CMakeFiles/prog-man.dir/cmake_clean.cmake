FILE(REMOVE_RECURSE
  "CMakeFiles/prog-man"
  "html/index.html"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/prog-man.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
