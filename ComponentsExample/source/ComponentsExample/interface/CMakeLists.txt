###
### CMakeLists.txt file for ComponentsExample Interfaces
###

# Dependencies on interface libraries to other ArmarX Packages must be specified
# in the following variable separated by whitespaces
# set(ComponentsExample_INTERFACE_DEPEND ArmarXCore)

# List of slice files to include in the interface library
set(SLICE_FILES
  RNGComponentProviderInterface.ice
)

# generate the interface library
armarx_interfaces_generate_library(ComponentsExample "${ComponentsExample_INTERFACE_DEPEND}")

set(COMPONENT_LIBS
  ArmarXCoreInterfaces
  ArmarXCore
  ComponentsExampleInterfaces)
