#ifndef _ARMARX_XMLUSERCODE_ARMARX_PICKANDPLACEGROUP_PICKANDPLACEGENERATEDBASE_H
#define _ARMARX_XMLUSERCODE_ARMARX_PICKANDPLACEGROUP_PICKANDPLACEGENERATEDBASE_H

#include <ArmarXCore/statechart/xmlstates/XMLState.h>
#include "PickAndPlaceGroupStatechartContext.generated.h"
#include <ArmarXCore/core/system/FactoryCollectionBase.h>
#include <ArmarXCore/observers/ObserverObjectFactories.h>
#include <RobotAPI/libraries/core/RobotAPIObjectFactories.h>
#include <ArmarXSimulation/interface/simulator/SimulatorInterface.h>
#include <MemoryX/interface/component/PriorKnowledgeInterface.h>

namespace armarx
{
    namespace PickAndPlaceGroup
    {
        template<typename StateType>
        class PickAndPlaceGeneratedBase
            : virtual public XMLStateTemplate < StateType >,
              public XMLStateFactoryBase
        {
        protected:
            class PickAndPlaceIn
            {
            private:
                PickAndPlaceGeneratedBase<StateType> *parent;
                
            public:
                PickAndPlaceIn(PickAndPlaceGeneratedBase<StateType> *parent)
                    : parent(parent)
                {
                }
                
            public:
                std::string getCloseHandShapeName() const
                {
                    return parent->State::getInput< std::string>("CloseHandShapeName");
                }
                void setCloseHandShapeName(const std::string & value) const
                {
                    parent->State::setInput("CloseHandShapeName", value);
                }
                bool isCloseHandShapeNameSet() const
                {
                    return parent->State::isInputParameterSet("CloseHandShapeName");
                }
                std::string getForceSensorDatafieldName() const
                {
                    return parent->State::getInput< std::string>("ForceSensorDatafieldName");
                }
                void setForceSensorDatafieldName(const std::string & value) const
                {
                    parent->State::setInput("ForceSensorDatafieldName", value);
                }
                bool isForceSensorDatafieldNameSet() const
                {
                    return parent->State::isInputParameterSet("ForceSensorDatafieldName");
                }
                float getForceThreshold() const
                {
                    return parent->State::getInput< float>("ForceThreshold");
                }
                void setForceThreshold(const float & value) const
                {
                    parent->State::setInput("ForceThreshold", value);
                }
                bool isForceThresholdSet() const
                {
                    return parent->State::isInputParameterSet("ForceThreshold");
                }
                std::string getGraspName() const
                {
                    return parent->State::getInput< std::string>("GraspName");
                }
                void setGraspName(const std::string & value) const
                {
                    parent->State::setInput("GraspName", value);
                }
                bool isGraspNameSet() const
                {
                    return parent->State::isInputParameterSet("GraspName");
                }
                std::string getGraspPreposeName() const
                {
                    return parent->State::getInput< std::string>("GraspPreposeName");
                }
                void setGraspPreposeName(const std::string & value) const
                {
                    parent->State::setInput("GraspPreposeName", value);
                }
                bool isGraspPreposeNameSet() const
                {
                    return parent->State::isInputParameterSet("GraspPreposeName");
                }
                std::string getGraspSetName() const
                {
                    return parent->State::getInput< std::string>("GraspSetName");
                }
                void setGraspSetName(const std::string & value) const
                {
                    parent->State::setInput("GraspSetName", value);
                }
                bool isGraspSetNameSet() const
                {
                    return parent->State::isInputParameterSet("GraspSetName");
                }
                std::string getHandNameInMemory() const
                {
                    return parent->State::getInput< std::string>("HandNameInMemory");
                }
                void setHandNameInMemory(const std::string & value) const
                {
                    parent->State::setInput("HandNameInMemory", value);
                }
                bool isHandNameInMemorySet() const
                {
                    return parent->State::isInputParameterSet("HandNameInMemory");
                }
                std::string getHandNameInRobotModel() const
                {
                    return parent->State::getInput< std::string>("HandNameInRobotModel");
                }
                void setHandNameInRobotModel(const std::string & value) const
                {
                    parent->State::setInput("HandNameInRobotModel", value);
                }
                bool isHandNameInRobotModelSet() const
                {
                    return parent->State::isInputParameterSet("HandNameInRobotModel");
                }
                std::string getKinematicChainName() const
                {
                    return parent->State::getInput< std::string>("KinematicChainName");
                }
                void setKinematicChainName(const std::string & value) const
                {
                    parent->State::setInput("KinematicChainName", value);
                }
                bool isKinematicChainNameSet() const
                {
                    return parent->State::isInputParameterSet("KinematicChainName");
                }
                std::string getObjectName() const
                {
                    return parent->State::getInput< std::string>("ObjectName");
                }
                void setObjectName(const std::string & value) const
                {
                    parent->State::setInput("ObjectName", value);
                }
                bool isObjectNameSet() const
                {
                    return parent->State::isInputParameterSet("ObjectName");
                }
                std::string getOpenHandShapeName() const
                {
                    return parent->State::getInput< std::string>("OpenHandShapeName");
                }
                void setOpenHandShapeName(const std::string & value) const
                {
                    parent->State::setInput("OpenHandShapeName", value);
                }
                bool isOpenHandShapeNameSet() const
                {
                    return parent->State::isInputParameterSet("OpenHandShapeName");
                }
                float getOrientationalAccuracyRadGrasp() const
                {
                    return parent->State::getInput< float>("OrientationalAccuracyRadGrasp");
                }
                void setOrientationalAccuracyRadGrasp(const float & value) const
                {
                    parent->State::setInput("OrientationalAccuracyRadGrasp", value);
                }
                bool isOrientationalAccuracyRadGraspSet() const
                {
                    return parent->State::isInputParameterSet("OrientationalAccuracyRadGrasp");
                }
                float getOrientationalAccuracyRadGraspPrepose() const
                {
                    return parent->State::getInput< float>("OrientationalAccuracyRadGraspPrepose");
                }
                void setOrientationalAccuracyRadGraspPrepose(const float & value) const
                {
                    parent->State::setInput("OrientationalAccuracyRadGraspPrepose", value);
                }
                bool isOrientationalAccuracyRadGraspPreposeSet() const
                {
                    return parent->State::isInputParameterSet("OrientationalAccuracyRadGraspPrepose");
                }
                float getOrientationalAccuracyRadLiftHand() const
                {
                    return parent->State::getInput< float>("OrientationalAccuracyRadLiftHand");
                }
                void setOrientationalAccuracyRadLiftHand(const float & value) const
                {
                    parent->State::setInput("OrientationalAccuracyRadLiftHand", value);
                }
                bool isOrientationalAccuracyRadLiftHandSet() const
                {
                    return parent->State::isInputParameterSet("OrientationalAccuracyRadLiftHand");
                }
                float getOrientationalAccuracyRadPlatform() const
                {
                    return parent->State::getInput< float>("OrientationalAccuracyRadPlatform");
                }
                void setOrientationalAccuracyRadPlatform(const float & value) const
                {
                    parent->State::setInput("OrientationalAccuracyRadPlatform", value);
                }
                bool isOrientationalAccuracyRadPlatformSet() const
                {
                    return parent->State::isInputParameterSet("OrientationalAccuracyRadPlatform");
                }
                std::vector< ::armarx::Vector3Ptr> getPosFinal() const
                {
                    return parent->State::getInput< ::armarx::SingleTypeVariantList>("PosFinal")->::armarx::SingleTypeVariantList::toStdVector< ::armarx::Vector3Ptr>();
                }
                void setPosFinal(const std::vector< ::armarx::Vector3Ptr> & value) const
                {
                    ::armarx::SingleTypeVariantListPtr container = ::armarx::SingleTypeVariantList::FromStdVector< ::armarx::Vector3Ptr>(value);
                    parent->State::setInput("PosFinal", *container);
                }
                bool isPosFinalSet() const
                {
                    return parent->State::isInputParameterSet("PosFinal");
                }
                std::vector< ::armarx::Vector3Ptr> getPosPick() const
                {
                    return parent->State::getInput< ::armarx::SingleTypeVariantList>("PosPick")->::armarx::SingleTypeVariantList::toStdVector< ::armarx::Vector3Ptr>();
                }
                void setPosPick(const std::vector< ::armarx::Vector3Ptr> & value) const
                {
                    ::armarx::SingleTypeVariantListPtr container = ::armarx::SingleTypeVariantList::FromStdVector< ::armarx::Vector3Ptr>(value);
                    parent->State::setInput("PosPick", *container);
                }
                bool isPosPickSet() const
                {
                    return parent->State::isInputParameterSet("PosPick");
                }
                std::vector< ::armarx::Vector3Ptr> getPosPlace() const
                {
                    return parent->State::getInput< ::armarx::SingleTypeVariantList>("PosPlace")->::armarx::SingleTypeVariantList::toStdVector< ::armarx::Vector3Ptr>();
                }
                void setPosPlace(const std::vector< ::armarx::Vector3Ptr> & value) const
                {
                    ::armarx::SingleTypeVariantListPtr container = ::armarx::SingleTypeVariantList::FromStdVector< ::armarx::Vector3Ptr>(value);
                    parent->State::setInput("PosPlace", *container);
                }
                bool isPosPlaceSet() const
                {
                    return parent->State::isInputParameterSet("PosPlace");
                }
                float getPositionalAccuracyGrasp() const
                {
                    return parent->State::getInput< float>("PositionalAccuracyGrasp");
                }
                void setPositionalAccuracyGrasp(const float & value) const
                {
                    parent->State::setInput("PositionalAccuracyGrasp", value);
                }
                bool isPositionalAccuracyGraspSet() const
                {
                    return parent->State::isInputParameterSet("PositionalAccuracyGrasp");
                }
                float getPositionalAccuracyGraspPrepose() const
                {
                    return parent->State::getInput< float>("PositionalAccuracyGraspPrepose");
                }
                void setPositionalAccuracyGraspPrepose(const float & value) const
                {
                    parent->State::setInput("PositionalAccuracyGraspPrepose", value);
                }
                bool isPositionalAccuracyGraspPreposeSet() const
                {
                    return parent->State::isInputParameterSet("PositionalAccuracyGraspPrepose");
                }
                float getPositionalAccuracyLiftHand() const
                {
                    return parent->State::getInput< float>("PositionalAccuracyLiftHand");
                }
                void setPositionalAccuracyLiftHand(const float & value) const
                {
                    parent->State::setInput("PositionalAccuracyLiftHand", value);
                }
                bool isPositionalAccuracyLiftHandSet() const
                {
                    return parent->State::isInputParameterSet("PositionalAccuracyLiftHand");
                }
                float getPositionalAccuracyPlatform() const
                {
                    return parent->State::getInput< float>("PositionalAccuracyPlatform");
                }
                void setPositionalAccuracyPlatform(const float & value) const
                {
                    parent->State::setInput("PositionalAccuracyPlatform", value);
                }
                bool isPositionalAccuracyPlatformSet() const
                {
                    return parent->State::isInputParameterSet("PositionalAccuracyPlatform");
                }
                ::armarx::FramedOrientationPtr getTcpTargetOrientation() const
                {
                    return parent->State::getInput< ::armarx::FramedOrientation>("TcpTargetOrientation");
                }
                void setTcpTargetOrientation(const ::armarx::FramedOrientation & value) const
                {
                    parent->State::setInput("TcpTargetOrientation", value);
                }
                void setTcpTargetOrientation(const ::armarx::FramedOrientationBasePtr & value) const
                {
                    parent->State::setInput("TcpTargetOrientation", *value);
                }
                bool isTcpTargetOrientationSet() const
                {
                    return parent->State::isInputParameterSet("TcpTargetOrientation");
                }
                ::armarx::FramedPositionPtr getTcpTargetPosition() const
                {
                    return parent->State::getInput< ::armarx::FramedPosition>("TcpTargetPosition");
                }
                void setTcpTargetPosition(const ::armarx::FramedPosition & value) const
                {
                    parent->State::setInput("TcpTargetPosition", value);
                }
                void setTcpTargetPosition(const ::armarx::FramedPositionBasePtr & value) const
                {
                    parent->State::setInput("TcpTargetPosition", *value);
                }
                bool isTcpTargetPositionSet() const
                {
                    return parent->State::isInputParameterSet("TcpTargetPosition");
                }
                int getTimeToMove() const
                {
                    return parent->State::getInput< int>("TimeToMove");
                }
                void setTimeToMove(const int & value) const
                {
                    parent->State::setInput("TimeToMove", value);
                }
                bool isTimeToMoveSet() const
                {
                    return parent->State::isInputParameterSet("TimeToMove");
                }
                int getTimeToWait() const
                {
                    return parent->State::getInput< int>("TimeToWait");
                }
                void setTimeToWait(const int & value) const
                {
                    parent->State::setInput("TimeToWait", value);
                }
                bool isTimeToWaitSet() const
                {
                    return parent->State::isInputParameterSet("TimeToWait");
                }
                float getTorqueThreshold() const
                {
                    return parent->State::getInput< float>("TorqueThreshold");
                }
                void setTorqueThreshold(const float & value) const
                {
                    parent->State::setInput("TorqueThreshold", value);
                }
                bool isTorqueThresholdSet() const
                {
                    return parent->State::isInputParameterSet("TorqueThreshold");
                }
            }; // class PickAndPlaceIn
            
            class PickAndPlaceLocal
            {
            private:
                PickAndPlaceGeneratedBase<StateType> *parent;
                
            public:
                PickAndPlaceLocal(PickAndPlaceGeneratedBase<StateType> *parent)
                    : parent(parent)
                {
                }
            }; // class PickAndPlaceLocal
            
            class PickAndPlaceOut
            {
            private:
                PickAndPlaceGeneratedBase<StateType> *parent;
                
            public:
                PickAndPlaceOut(PickAndPlaceGeneratedBase<StateType> *parent)
                    : parent(parent)
                {
                }
            }; // class PickAndPlaceOut
            
        protected:
            const PickAndPlaceIn in;
            const PickAndPlaceLocal local;
            const PickAndPlaceOut out;
            
        public:
            PickAndPlaceGeneratedBase(const XMLStateConstructorParams& stateData)
                : XMLStateTemplate < StateType > (stateData),
                  in(PickAndPlaceIn(this)),
                  local(PickAndPlaceLocal(this)),
                  out(PickAndPlaceOut(this))
            {
            }
            PickAndPlaceGeneratedBase(const PickAndPlaceGeneratedBase &source)
                : IceUtil::Shared(source),
                  armarx::StateIceBase(source),
                  armarx::StateBase(source),
                  armarx::StateController(source),
                  armarx::State(source),
                  XMLStateTemplate < StateType > (source),
                  in(PickAndPlaceIn(this)),
                  local(PickAndPlaceLocal(this)),
                  out(PickAndPlaceOut(this))
            {
            }
            
        public:
            void emitFailure()
            {
                State::sendEvent(State::createEvent("Failure"));
            }
            void installConditionForFailure(const Term& condition, const std::string& desc = "")
            {
                State::installCondition(condition, State::createEvent("Failure"), desc);
            }
            ::armarx::EventPtr createEventFailure()
            {
                return State::createEvent("Failure");
            }
            void emitSuccess()
            {
                State::sendEvent(State::createEvent("Success"));
            }
            void installConditionForSuccess(const Term& condition, const std::string& desc = "")
            {
                State::installCondition(condition, State::createEvent("Success"), desc);
            }
            ::armarx::EventPtr createEventSuccess()
            {
                return State::createEvent("Success");
            }
            armarx::SimulatorInterfacePrx getSimulatorInterface() const
            {
                return StateBase::getContext<PickAndPlaceGroupStatechartContext>()->getSimulatorInterface();
            }
            memoryx::PriorKnowledgeInterfacePrx getPriorKnowledge() const
            {
                return StateBase::getContext<PickAndPlaceGroupStatechartContext>()->getPriorKnowledge();
            }
            static std::string GetName()
            {
                return "PickAndPlace";
            }
            void __attribute__((used)) __forceLibLoading()
            {
                // Do not call this method.
                // The sole purpose of this method is to force the compiler/linker to include all libraries.
                armarx::GenericFactory< ::armarx::Vector3, ::armarx::Vector3> ().create(::armarx::Vector3::ice_staticId());
                armarx::GenericFactory< ::armarx::FramedPosition, ::armarx::FramedPosition> ().create(::armarx::FramedPosition::ice_staticId());
                armarx::GenericFactory< ::armarx::FramedOrientation, ::armarx::FramedOrientation> ().create(::armarx::FramedOrientation::ice_staticId());
            }
        }; // class PickAndPlaceGeneratedBase
    } // namespace PickAndPlaceGroup
} // namespace armarx

#endif // _ARMARX_XMLUSERCODE_ARMARX_PICKANDPLACEGROUP_PICKANDPLACEGENERATEDBASE_H
