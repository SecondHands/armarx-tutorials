# Template for a library's ConfigVersion.cmake file
# See the following links:
#  http://www.vtk.org/Wiki/CMake/Tutorials/How_to_create_a_ProjectConfig.cmake_file
#  http://www.cmake.org/Wiki/CMake/Tutorials/Packaging

set(PACKAGE_VERSION "0.1.0")
#set(PACKAGE_VERSION_MAJOR "0")
#set(PACKAGE_VERSION_MINOR "1")
#set(PACKAGE_VERSION_PATCH "0")

set(PACKAGE_VERSION_EXACT FALSE)
set(PACKAGE_VERSION_COMPATIBLE FALSE)
set(PACKAGE_VERSION_UNSUITABLE FALSE)

# Check whether the requested PACKAGE_FIND_VERSION is compatible
if("${PACKAGE_VERSION}" VERSION_LESS "${PACKAGE_FIND_VERSION}")
  set(PACKAGE_VERSION_UNSUITABLE TRUE)
else()
  set(PACKAGE_VERSION_COMPATIBLE TRUE)
  if ("${PACKAGE_VERSION}" VERSION_EQUAL "${PACKAGE_FIND_VERSION}")
    set(PACKAGE_VERSION_EXACT TRUE)
  endif()
endif()
