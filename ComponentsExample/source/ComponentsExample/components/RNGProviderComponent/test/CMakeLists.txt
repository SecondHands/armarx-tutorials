
# Libs required for the tests
SET(LIBS ${LIBS} ArmarXCore RNGProviderComponent)
 
armarx_add_test(RNGProviderComponentTest RNGProviderComponentTest.cpp "${LIBS}")