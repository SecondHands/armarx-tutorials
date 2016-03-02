FILE(REMOVE_RECURSE
  "CMakeFiles/dependencies"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/dependencies.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
