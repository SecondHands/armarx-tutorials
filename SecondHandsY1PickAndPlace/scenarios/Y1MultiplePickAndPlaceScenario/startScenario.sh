#!/bin/bash

# Components

/usr/share/cmake/ArmarXCore/../../..//bin/RobotControlRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/Y1MultiplePickAndPlaceScenario/config/RobotControl.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/Y1MultiplePickAndPlaceScenario/config/XMLRemoteStateOfferer.GraspObject.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/Y1MultiplePickAndPlaceScenario/config/XMLRemoteStateOfferer.Hand.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/Y1MultiplePickAndPlaceScenario/config/XMLRemoteStateOfferer.MotionControl.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/Y1MultiplePickAndPlaceScenario/config/XMLRemoteStateOfferer.PickAndPlace.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/Y1MultiplePickAndPlaceScenario/config/XMLRemoteStateOfferer.PlaceObject.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/Y1MultiplePickAndPlaceScenario/config/XMLRemoteStateOfferer.PlatformGroup.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

/usr/share/cmake/ArmarXCore/../../..//bin/XMLRemoteStateOffererRun --Ice.Config=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/scenarios/Y1MultiplePickAndPlaceScenario/config/XMLRemoteStateOfferer.VisualServo.cfg --ArmarX.DependenciesConfig=/home/felipebelo/Documents/projects/secondhands/projects/secondhands-git/armarx-tutorials/SecondHandsY1PickAndPlace/build/config/dependencies.cfg &

if [ "$1" == "-w" ]; then
for j in `jobs -p`; do
wait $j
done
fi
