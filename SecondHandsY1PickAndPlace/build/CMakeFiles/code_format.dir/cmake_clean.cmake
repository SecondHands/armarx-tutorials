FILE(REMOVE_RECURSE
  "CMakeFiles/code_format"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/code_format.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
