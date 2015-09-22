###
### CMakeLists.txt file for StateChartTutorial Interfaces
###

# Dependencies on interface libraries to other ArmarX Packages must be specified
# in the following variable separated by whitespaces
# set(StateChartTutorial_INTERFACE_DEPEND ArmarXCore)

# List of slice files to include in the interface library
set(SLICE_FILES
)

# generate the interface library
armarx_interfaces_generate_library(StateChartTutorial "${StateChartTutorial_INTERFACE_DEPEND}")
