#!/bin/bash

# Components

/usr/share/cmake/ArmarXCore/../../..//bin/RobotControlRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/PickAndPlaceScenario/config/RobotControl.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/PickAndPlaceScenario/config/XMLRemoteStateOfferer.GraspObject.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/PickAndPlaceScenario/config/XMLRemoteStateOfferer.Hand.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/PickAndPlaceScenario/config/XMLRemoteStateOfferer.MotionControl.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/PickAndPlaceScenario/config/XMLRemoteStateOfferer.PickAndPlace.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/PickAndPlaceScenario/config/XMLRemoteStateOfferer.PlaceObject.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/PickAndPlaceScenario/config/XMLRemoteStateOfferer.PlatformGroup.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/PickAndPlaceScenario/config/XMLRemoteStateOfferer.VisualServo.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/GraphNodePoseResolverAppRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/PickAndPlaceScenario/config/GraphNodePoseResolverApp.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

if [ "$1" == "-w" ]; then
for j in `jobs -p`; do
wait $j
done
fi
