# ComponentsExample

cmake_minimum_required(VERSION 2.8)

find_package("ArmarXCore" REQUIRED)

# Include provides all necessary ArmarX CMake macros
include(${ArmarXCore_USE_FILE})

set(ARMARX_ENABLE_DEPENDENCY_VERSION_CHECK_DEFAULT FALSE)
set(ARMARX_ENABLE_AUTO_CODE_FORMATTING TRUE)

# Name for the project
armarx_project("ComponentsExample")

# Specify each ArmarX Package dependency with the following macro
# depends_on_armarx_package(ArmarXGui "OPTIONAL")

add_subdirectory(etc)
add_subdirectory(source)

install_project()
