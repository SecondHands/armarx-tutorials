FILE(REMOVE_RECURSE
  "CMakeFiles/coverage"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/coverage.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
