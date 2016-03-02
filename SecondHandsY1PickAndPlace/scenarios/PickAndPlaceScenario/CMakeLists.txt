# Add your components below as shown in the following example:
#
# set(SCENARIO_COMPONENTS
#    ConditionHandler
#    Observer
#    PickAndPlaceComponent)

#set(SCENARIO_COMPONENTS
#    )

# optional 3rd parameter: "path/to/global/config.cfg"
#armarx_scenario("PickAndPlaceScenario" "${SCENARIO_COMPONENTS}")

#set(SCENARIO_CONFIGS
#    config/ComponentName.optionalString.cfg
#    )
# optional 3rd parameter: "path/to/global/config.cfg"
#armarx_scenario_from_configs("PickAndPlaceScenario" "${SCENARIO_CONFIGS}")

set(SCENARIO_CONFIGS
    config/RobotControl.cfg
    config/XMLRemoteStateOfferer.GraspObject.cfg
    config/XMLRemoteStateOfferer.Hand.cfg
    config/XMLRemoteStateOfferer.MotionControl.cfg
    config/XMLRemoteStateOfferer.PickAndPlace.cfg
    config/XMLRemoteStateOfferer.PlaceObject.cfg
    config/XMLRemoteStateOfferer.PlatformGroup.cfg
    config/XMLRemoteStateOfferer.VisualServo.cfg
    config/GraphNodePoseResolverApp.cfg
)
armarx_scenario_from_configs("PickAndPlaceScenario" "${SCENARIO_CONFIGS}")
