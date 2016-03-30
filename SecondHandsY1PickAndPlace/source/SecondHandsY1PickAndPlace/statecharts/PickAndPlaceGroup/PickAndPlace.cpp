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
 * @package    PickAndPlaceTutorial::PickAndPlaceGroup
 * @author     Felipe Augusto Weilemann Belo ( felipe dot belo at ocado dot com )
 * @date       2016
 * @copyright  http://www.gnu.org/licenses/gpl-2.0.txt
 *             GNU General Public License
 */

#include "PickAndPlace.h"

//for handeling objects
#include <MemoryX/libraries/memorytypes/entity/ObjectClass.h>
#include <MemoryX/libraries/memorytypes/MemoryXTypesObjectFactories.h>
#include <MemoryX/core/MemoryXCoreObjectFactories.h>
//for calculations
#include <VirtualRobot/MathTools.h>


using namespace armarx;
using namespace PickAndPlaceGroup;

// DO NOT EDIT NEXT LINE
PickAndPlace::SubClassRegistry PickAndPlace::Registry(PickAndPlace::GetName(), &PickAndPlace::CreateInstance);



void PickAndPlace::onEnter()
{
    //     armarx::SimulatorInterfacePrx simulatorPrx = getSimulatorInterface();
    //     memoryx::PriorKnowledgeInterfacePrx priorKnowledgeProxy = getPriorKnowledge();
    //     std::string objClassName = in.getObjectName();
    //     //we'll assume that the instance - if there is any - is named the same as the class
    //     std::string objInstanceName = objClassName;
    //     memoryx::PersistentObjectClassSegmentBasePrx classesSegmentPrx = priorKnowledgeProxy->getObjectClassesSegment();
    //     memoryx::EntityBasePtr classEntity = classesSegmentPrx->getEntityByName(objClassName);
    //     if (!classEntity)
    //     {
    //         ARMARX_ERROR_S << "No memory entity found with name " << objClassName;
    //     }
    //     memoryx::ObjectClassPtr objectClass = memoryx::ObjectClassPtr::dynamicCast(classEntity);
    //     if (!objectClass)
    //     {
    //         ARMARX_ERROR_S << "Could not cast entitiy to object class, name: " << objClassName;
    //     }
    // //    Eigen::Vector3f pos = {4200, 7000, 1030};
    //     Eigen::Vector3f pos = {4120, 7090, 1140};
    //     Eigen::Matrix4f globalPose;
    //     VirtualRobot::MathTools::rpy2eigen4f(-0.5*M_PI, 0, -0.5*M_PI, globalPose);

    //     globalPose.block<3,1>(0,3) = pos;
    //     armarx::PosePtr pose = new armarx::Pose(globalPose);
    //     ARMARX_IMPORTANT_S << "to pose x";
    //     if (!simulatorPrx->hasObject(objInstanceName))
    //     {
    //         ARMARX_IMPORTANT_S << "Adding object " << objClassName << " at pose:" << *pose;
    //         simulatorPrx->addObject(objectClass, objInstanceName, pose, false);
    //     }
    //     else
    //     {
    //         ARMARX_IMPORTANT_S << "Moving object " << objClassName << " to pose:" << *pose;
    //         simulatorPrx->setObjectPose(objInstanceName, pose);
    //     }
}

//void PickAndPlace::run()
//{
//    // put your user code for the execution-phase here
//    // runs in seperate thread, thus can do complex operations
//    // should check constantly whether isRunningTaskStopped() returns true
//
//// uncomment this if you need a continous run function. Make sure to use sleep or use blocking wait to reduce cpu load.
//    while (!isRunningTaskStopped()) // stop run function if returning true
//    {
//        // do your calculations
//    }
//}

//void PickAndPlace::onBreak()
//{
//    // put your user code for the breaking point here
//    // execution time should be short (<100ms)
//}

void PickAndPlace::onExit()
{
    // put your user code for the exit point here
    // execution time should be short (<100ms)
}


// DO NOT EDIT NEXT FUNCTION
XMLStateFactoryBasePtr PickAndPlace::CreateInstance(XMLStateConstructorParams stateData)
{
    return XMLStateFactoryBasePtr(new PickAndPlace(stateData));
}

