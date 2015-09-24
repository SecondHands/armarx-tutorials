###
### CMakeLists.txt file for SecondHandsPickAndPlace Interfaces
###

# Dependencies on interface libraries to other ArmarX Packages must be specified
# in the following variable separated by whitespaces
# set(SecondHandsPickAndPlace_INTERFACE_DEPEND ArmarXCore)

# List of slice files to include in the interface library
set(SLICE_FILES
)

# generate the interface library
armarx_interfaces_generate_library(SecondHandsPickAndPlace "${SecondHandsPickAndPlace_INTERFACE_DEPEND}")
