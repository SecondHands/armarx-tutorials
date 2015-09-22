/*
 * This file is part of ArmarX.
 *
 * ArmarX is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * ArmarX is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * @package    StateChartTutorial::StateChartTutorialGroup
 * @author     Felix Duvallet ( felix dot duvallet at epfl dot ch )
 * @date       2015
 * @copyright  http://www.gnu.org/licenses/gpl-2.0.txt
 *             GNU General Public License
 */

#include "MoveRobotJoints.h"

using namespace armarx;
using namespace StateChartTutorialGroup;

// DO NOT EDIT NEXT LINE
MoveRobotJoints::SubClassRegistry MoveRobotJoints::Registry(MoveRobotJoints::GetName(), &MoveRobotJoints::CreateInstance);



MoveRobotJoints::MoveRobotJoints(const XMLStateConstructorParams& stateData) :
    XMLStateTemplate<MoveRobotJoints>(stateData),  MoveRobotJointsGeneratedBase<MoveRobotJoints>(stateData)
{
}

void MoveRobotJoints::onEnter()
{
    // get the target joint values
    std::map<std::string, float> jointValueMap = in.getWavingTargetPose();

    //build conditions for OnPoseReached
    Term poseReachedConditions;
    const float eps = 0.05f;
    for (const auto& jointNameValue : jointValueMap) {
        std::string jointNameDatafield = "Armar3KinematicUnitObserver.jointangles." + jointNameValue.first;
        float jointValue = jointNameValue.second;
        Literal jointValueReached(jointNameDatafield, "inrange",
                                  Literal::createParameterList(jointValue - eps, jointValue + eps));
        poseReachedConditions = poseReachedConditions && jointValueReached;
    }
    installConditionForOnPoseReachedWave(poseReachedConditions);
}

void MoveRobotJoints::run()
{
    std::map<std::string, float> jointVelocityMap = in.getWavingVelocity();

    NameControlModeMap velocityControlModeMap;
    for (const auto& jointVelocity : jointVelocityMap) {
        velocityControlModeMap[jointVelocity.first] = eVelocityControl;
    }
    KinematicUnitInterfacePrx kinUnit = getKinematicUnit();
    kinUnit->switchControlMode(velocityControlModeMap);
    kinUnit->setJointVelocities(jointVelocityMap);
}

void MoveRobotJoints::onBreak()
{
    // put your user code for the breaking point here
    // execution time should be short (<100ms)
}

void MoveRobotJoints::onExit()
{
    // put your user code for the exit point here
    // execution time should be short (<100ms)

}


// DO NOT EDIT NEXT FUNCTION
XMLStateFactoryBasePtr MoveRobotJoints::CreateInstance(XMLStateConstructorParams stateData)
{
    return XMLStateFactoryBasePtr(new MoveRobotJoints(stateData));
}

