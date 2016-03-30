###
### CMakeLists.txt file for PickAndPlaceTutorial Interfaces
###

# Dependencies on interface libraries to other ArmarX Packages must be specified
# in the following variable separated by whitespaces
# set(PickAndPlaceTutorial_INTERFACE_DEPEND ArmarXCore)

# List of slice files to include in the interface library
set(SLICE_FILES
)

# generate the interface library
armarx_interfaces_generate_library(PickAndPlaceTutorial "${PickAndPlaceTutorial_INTERFACE_DEPEND}")
