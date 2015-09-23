armarx_component_set_name("RNGApp")

#find_package(MyLib QUIET)
#armarx_build_if(MyLib_FOUND "MyLib not available")
#
# all include_directories must be guarded by if(Xyz_FOUND)
# for multiple libraries write: if(X_FOUND AND Y_FOUND)....
#if(MyLib_FOUND)
#    include_directories(${MyLib_INCLUDE_DIRS})
#endif()

set(COMPONENT_LIBS ArmarXCoreInterfaces ArmarXCore RNGProviderComponent RNGCallerComponent)

set(EXE_SOURCE RNGApp.h main.cpp)

armarx_add_component_executable("${EXE_SOURCE}")
