
# Libs required for the tests
SET(LIBS ${LIBS} ArmarXCore RNGCallerComponent)
 
armarx_add_test(RNGCallerComponentTest RNGCallerComponentTest.cpp "${LIBS}")