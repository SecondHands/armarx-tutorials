
# store the necessary variables since this script is run outside the normal CMake phase
# and the variables would be undefined upon execution
set(PROJECT_NAME "SecondHandsY1PickAndPlace")
set(PROJECT_SOURCE_DIR "/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace")
set(PROJECT_BIN_DIR "/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/bin")
set(PROJECT_EXES "")
set(PROJECT_BINARY_DIR "/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build")
set(PROJECT_PROPERTY_OVERVIEW_DOX_FILE "/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/doxygen/propertydocs_overview.dox")
set(PROJECT_PROPERTY_DOX_FILE "/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/doxygen/propertydocs.dox")

set(DOXYGEN_DOCUMENTATION_PAGES_DIR "/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc/doxygen/pages")
set(DOXYGEN_DOCUMENTATION_IMAGE_DIR "/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc/doxygen/images")
set(DOXYGEN_DOCUMENTATION_SNIPPET_DIR "/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/etc/doxygen/snippets /home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/source")
set(DOXYGEN_DOCUMENTATION_HTML_OUTPUT_DIR_REL "html")
set(DOXYGEN_DOCUMENTATION_LAYOUT_DIR_REL "/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/doxygen/layout")
set(DOXYGEN_CONFIG_FILE "/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/doxygen/SecondHandsY1PickAndPlace.Doxyfile")
set(DOXYGEN_CONFIG_TEMPLATE_FILE "")

if("${PROJECT_EXES}" STREQUAL "")
    file(GLOB PROJECT_EXES RELATIVE ${PROJECT_BIN_DIR} ${PROJECT_BIN_DIR}/*Run)
endif()

# generate component properties doc
file(WRITE ${PROJECT_PROPERTY_OVERVIEW_DOX_FILE} "/**\n\\defgroup componentproperties List of Application & Component Properties\n\\ingroup armarx-tools\n\\brief This page shows the list of properties of all components and for usage documentation refer to \\ref armarx-componentproperties.")
file(WRITE ${PROJECT_PROPERTY_DOX_FILE} "/**\n")
string(REPLACE " " ";" APP_EXECUTABLES "${PROJECT_EXES}")
foreach(APP_EXECUTABLE ${APP_EXECUTABLES})
    if(${APP_EXECUTABLE} MATCHES "(.+)Run$")
        if(EXISTS "${PROJECT_BIN_DIR}/${APP_EXECUTABLE}")
            message(STATUS "${PROJECT_BIN_DIR}/${APP_EXECUTABLE} --print-options --options-format=doxygen_component_pages")
            execute_process(COMMAND "${PROJECT_BIN_DIR}/${APP_EXECUTABLE}" --print-options --options-format=doxygen_component_pages
                            OUTPUT_VARIABLE DOC_CONTENT)

            #file(APPEND ${PROJECT_PROPERTY_OVERVIEW_DOX_FILE} "\n  - \\subpage ${CMAKE_MATCH_1}_properties\n\n")
            #file(APPEND ${PROJECT_PROPERTY_DOX_FILE} "\n\\page ${CMAKE_MATCH_1}_properties ${CMAKE_MATCH_1} Properties\n")

            # Application-specific properties are always at the beginning of the list
            # We have to specify the group with the application name here since it is not known at the point where DOC_CONTENT is generated
            file(APPEND ${PROJECT_PROPERTY_DOX_FILE} "\\defgroup Application${CMAKE_MATCH_1}_properties ${CMAKE_MATCH_1} Application Properties\n")
            file(APPEND ${PROJECT_PROPERTY_DOX_FILE} "\\ingroup componentproperties\n")
            file(APPEND ${PROJECT_PROPERTY_DOX_FILE} "\\brief &nbsp;")

            file(APPEND ${PROJECT_PROPERTY_DOX_FILE} "${DOC_CONTENT}")
        endif()
    endif()
endforeach()
file(APPEND ${PROJECT_PROPERTY_OVERVIEW_DOX_FILE} "\n*/\n")
file(APPEND ${PROJECT_PROPERTY_DOX_FILE} "\n*/\n")
