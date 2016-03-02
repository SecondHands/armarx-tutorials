#----------------------------------------------------------------
# Generated CMake target import file for configuration "".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "PickAndPlaceGroup" for configuration ""
set_property(TARGET PickAndPlaceGroup APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(PickAndPlaceGroup PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "/usr/lib/x86_64-linux-gnu/libIce.so;/usr/lib/x86_64-linux-gnu/libIceUtil.so;/usr/lib/x86_64-linux-gnu/libIceStorm.so;/usr/lib/x86_64-linux-gnu/libIceBox.so;/usr/lib/x86_64-linux-gnu/libIceGrid.so;/usr/lib/x86_64-linux-gnu/libGlacier2.so;RobotAPIInterfaces;RobotAPICore;ArmarXCoreInterfaces;ArmarXCore;ArmarXCoreStatechart;ArmarXCoreObservers;MemoryXInterfaces;ArmarXSimulationInterfaces;MemoryXMemoryTypes"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libPickAndPlaceGroup.so.0.1.0"
  IMPORTED_SONAME_NOCONFIG "libPickAndPlaceGroup.so.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS PickAndPlaceGroup )
list(APPEND _IMPORT_CHECK_FILES_FOR_PickAndPlaceGroup "${_IMPORT_PREFIX}/lib/libPickAndPlaceGroup.so.0.1.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
