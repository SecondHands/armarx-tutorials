armarx_component_set_name("RNGProviderComponent")

find_package(Boost COMPONENTS random QUIET)
armarx_build_if(Boost_FOUND "Boost not available")
#
# all include_directories must be guarded by if(Xyz_FOUND)
# for multiple libraries write: if(X_FOUND AND Y_FOUND)....
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif()

set(COMPONENT_LIBS ArmarXCoreInterfaces ArmarXCore ComponentsExampleInterfaces)


set(SOURCES
./RNGProviderComponent.cpp
#@TEMPLATE_LINE@@COMPONENT_PATH@/@COMPONENT_NAME@.cpp
)
set(HEADERS
./RNGProviderComponent.h
#@TEMPLATE_LINE@@COMPONENT_PATH@/@COMPONENT_NAME@.h
)

armarx_add_component("${SOURCES}" "${HEADERS}")

# add unit tests
add_subdirectory(test)
