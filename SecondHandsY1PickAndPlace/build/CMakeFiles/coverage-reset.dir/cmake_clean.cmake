FILE(REMOVE_RECURSE
  "CMakeFiles/coverage-reset"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/coverage-reset.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
