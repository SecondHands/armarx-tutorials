#ifndef ARMARX_COMPONENT_ARMARX_GRASPOBJECTGROUP_GRASPOBJECTGROUPSTATECHARTCONTEXT_H
#define ARMARX_COMPONENT_ARMARX_GRASPOBJECTGROUP_GRASPOBJECTGROUPSTATECHARTCONTEXT_H

#include <ArmarXCore/core/Component.h>
#include <ArmarXCore/core/system/ImportExportComponent.h>
#include <ArmarXCore/statechart/StatechartContext.h>
#include <MemoryX/interface/gui/EntityDrawerInterface.h>
#include <MemoryX/interface/observers/ObjectMemoryObserverInterface.h>
#include <MemoryX/interface/component/PriorKnowledgeInterface.h>
#include <MemoryX/interface/component/WorkingMemoryInterface.h>
#include <RobotAPI/interface/visualization/DebugDrawerInterface.h>
#include <RobotAPI/interface/units/ForceTorqueUnit.h>
#include <RobotAPI/interface/units/KinematicUnitInterface.h>
#include <RobotAPI/interface/core/RobotState.h>
#include <RobotAPI/interface/units/TCPControlUnit.h>
#include <RobotAPI/interface/speech/SpeechInterface.h>
#include <RobotComponents/interface/components/ViewSelectionInterface.h>
#include <RobotAPI/libraries/core/remoterobot/RemoteRobot.h>

namespace armarx
{
    namespace GraspObjectGroup
    {
        class GraspObjectGroupStatechartContext
            : virtual public StatechartContext
        {
        protected:
            class PropertyDefinitions
                : public StatechartContextPropertyDefinitions
            {
            public:
                PropertyDefinitions(std::string prefix)
                    : StatechartContextPropertyDefinitions(prefix)
                {
                    defineOptionalProperty<std::string>("EntityDrawerTopicName", "DebugDrawerUpdates", "Name of the entity drawer topic that should be used");
                    defineOptionalProperty<std::string>("ObjectMemoryObserverName", "ObjectMemoryObserver", "Name of the object memory observer that should be used");
                    defineOptionalProperty<std::string>("PriorKnowledgeName", "PriorKnowledge", "Name of the prior knowledge that should be used");
                    defineOptionalProperty<std::string>("WorkingMemoryName", "WorkingMemory", "Name of the working memory that should be used");
                    defineOptionalProperty<std::string>("DebugDrawerTopicName", "DebugDrawerUpdates", "Name of the debug drawer topic that should be used");
                    defineOptionalProperty<std::string>("ForceTorqueUnitObserverName", "ForceTorqueUnitObserver", "Name of the force torque unit observer that should be used");
                    defineRequiredProperty<std::string>("KinematicUnitName", "Name of the kinematic unit that should be used");
                    defineOptionalProperty<std::string>("RobotStateComponentName", "RobotStateComponent", "Name of the robot state component that should be used");
                    defineOptionalProperty<std::string>("TCPControlUnitName", "TCPControlUnit", "Name of the tcp control unit that should be used");
                    defineOptionalProperty<std::string>("TextToSpeechTopicName", "TextToSpeech", "Name of the text to speech topic that should be used");
                    defineOptionalProperty<std::string>("ViewSelectionName", "ViewSelection", "Name of the view selection that should be used");
                }
            }; // class PropertyDefinitions
            
        private:
            memoryx::EntityDrawerInterfacePrx entityDrawerTopic;
            memoryx::ObjectMemoryObserverInterfacePrx objectMemoryObserver;
            memoryx::PriorKnowledgeInterfacePrx priorKnowledge;
            memoryx::WorkingMemoryInterfacePrx WorkingMemory;
            DebugDrawerInterfacePrx debugDrawerTopic;
            ForceTorqueUnitObserverInterfacePrx forceTorqueObserver;
            KinematicUnitInterfacePrx kinematicUnit;
            RobotStateComponentInterfacePrx robotStateComponent;
            TCPControlUnitInterfacePrx tcpControlUnit;
            TextListenerInterfacePrx textToSpeech;
            ViewSelectionInterfacePrx viewSelection;
            VirtualRobot::RobotPtr remoteRobot;
            
        public:
            std::string getDefaultName() const
            {
                return "GraspObjectGroupStatechartContext";
            }
            virtual void onInitStatechartContext()
            {
                offeringTopic(getProperty<std::string>("EntityDrawerTopicName").getValue());
                usingProxy(getProperty<std::string>("ObjectMemoryObserverName").getValue());
                usingProxy(getProperty<std::string>("PriorKnowledgeName").getValue());
                usingProxy(getProperty<std::string>("WorkingMemoryName").getValue());
                offeringTopic(getProperty<std::string>("DebugDrawerTopicName").getValue());
                usingProxy(getProperty<std::string>("ForceTorqueUnitObserverName").getValue());
                usingProxy(getProperty<std::string>("KinematicUnitName").getValue());
                usingProxy(getProperty<std::string>("RobotStateComponentName").getValue());
                usingProxy(getProperty<std::string>("TCPControlUnitName").getValue());
                offeringTopic(getProperty<std::string>("TextToSpeechTopicName").getValue());
                usingProxy(getProperty<std::string>("ViewSelectionName").getValue());
            }
            virtual void onConnectStatechartContext()
            {
                entityDrawerTopic = getTopic<memoryx::EntityDrawerInterfacePrx>(getProperty<std::string>("EntityDrawerTopicName").getValue());
                objectMemoryObserver = getProxy<memoryx::ObjectMemoryObserverInterfacePrx>(getProperty<std::string>("ObjectMemoryObserverName").getValue());
                priorKnowledge = getProxy<memoryx::PriorKnowledgeInterfacePrx>(getProperty<std::string>("PriorKnowledgeName").getValue());
                WorkingMemory = getProxy<memoryx::WorkingMemoryInterfacePrx>(getProperty<std::string>("WorkingMemoryName").getValue());
                debugDrawerTopic = getTopic<DebugDrawerInterfacePrx>(getProperty<std::string>("DebugDrawerTopicName").getValue());
                forceTorqueObserver = getProxy<ForceTorqueUnitObserverInterfacePrx>(getProperty<std::string>("ForceTorqueUnitObserverName").getValue());
                kinematicUnit = getProxy<KinematicUnitInterfacePrx>(getProperty<std::string>("KinematicUnitName").getValue());
                robotStateComponent = getProxy<RobotStateComponentInterfacePrx>(getProperty<std::string>("RobotStateComponentName").getValue());
                tcpControlUnit = getProxy<TCPControlUnitInterfacePrx>(getProperty<std::string>("TCPControlUnitName").getValue());
                textToSpeech = getTopic<TextListenerInterfacePrx>(getProperty<std::string>("TextToSpeechTopicName").getValue());
                viewSelection = getProxy<ViewSelectionInterfacePrx>(getProperty<std::string>("ViewSelectionName").getValue());
                // initialize remote robot
                remoteRobot.reset(new RemoteRobot(robotStateComponent->getSynchronizedRobot()));
            }
            memoryx::EntityDrawerInterfacePrx getEntityDrawerTopic() const { return entityDrawerTopic; }
            memoryx::ObjectMemoryObserverInterfacePrx getObjectMemoryObserver() const { return objectMemoryObserver; }
            memoryx::PriorKnowledgeInterfacePrx getPriorKnowledge() const { return priorKnowledge; }
            memoryx::WorkingMemoryInterfacePrx getWorkingMemory() const { return WorkingMemory; }
            DebugDrawerInterfacePrx getDebugDrawerTopic() const { return debugDrawerTopic; }
            ForceTorqueUnitObserverInterfacePrx getForceTorqueObserver() const { return forceTorqueObserver; }
            KinematicUnitInterfacePrx getKinematicUnit() const { return kinematicUnit; }
            RobotStateComponentInterfacePrx getRobotStateComponent() const { return robotStateComponent; }
            TCPControlUnitInterfacePrx getTCPControlUnit() const { return tcpControlUnit; }
            TextListenerInterfacePrx getTextToSpeech() const { return textToSpeech; }
            ViewSelectionInterfacePrx getViewSelection() const { return viewSelection; }
            const VirtualRobot::RobotPtr getRobot() const
            {
                return remoteRobot;
            }
            virtual PropertyDefinitionsPtr createPropertyDefinitions()
            {
                return PropertyDefinitionsPtr(new GraspObjectGroupStatechartContext::PropertyDefinitions(getConfigIdentifier()));
            }
        }; // class GraspObjectGroupStatechartContext
    } // namespace GraspObjectGroup
} // namespace armarx

#endif // ARMARX_COMPONENT_ARMARX_GRASPOBJECTGROUP_GRASPOBJECTGROUPSTATECHARTCONTEXT_H
