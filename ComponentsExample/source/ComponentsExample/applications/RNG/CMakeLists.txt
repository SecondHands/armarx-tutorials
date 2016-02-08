armarx_component_set_name("RNGApp")

#find_package(MyLib QUIET)
#armarx_build_if(MyLib_FOUND "MyLib not available")
#
# all include_directories must be guarded by if(Xyz_FOUND)
# for multiple libraries write: if(X_FOUND AND Y_FOUND)....
#if(MyLib_FOUND)
#    include_directories(${MyLib_INCLUDE_DIRS})
#endif()

find_package(Eigen3 QUIET)
armarx_build_if(Eigen3_FOUND "Eigen3 not available")
if (Eigen3_FOUND)
    message("*** Found eigen *** ${Eigen3_INCLUDE_DIR}")
    include_directories(${Eigen3_INCLUDE_DIR})
endif()


set(COMPONENT_LIBS ArmarXCoreInterfaces ArmarXCore RNGProviderComponent RNGCallerComponent)

set(EXE_SOURCE RNGApp.h main.cpp)

armarx_add_component_executable("${EXE_SOURCE}")
