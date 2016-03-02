set(SCENARIO_CONFIGS
    config/RobotControl.cfg
    config/XMLRemoteStateOfferer.GraspObject.cfg
    config/XMLRemoteStateOfferer.Hand.cfg
    config/XMLRemoteStateOfferer.MotionControl.cfg
    config/XMLRemoteStateOfferer.PickAndPlace.cfg
    config/XMLRemoteStateOfferer.PlaceObject.cfg
    config/XMLRemoteStateOfferer.PlatformGroup.cfg
    config/XMLRemoteStateOfferer.VisualServo.cfg
)
armarx_scenario_from_configs("Y1MultiplePickAndPlaceScenario" "${SCENARIO_CONFIGS}")