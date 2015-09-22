#ifndef _ARMARX_XMLUSERCODE_ARMARX_STATECHARTTUTORIALGROUP_COUNTERSTATEGENERATEDBASE_H
#define _ARMARX_XMLUSERCODE_ARMARX_STATECHARTTUTORIALGROUP_COUNTERSTATEGENERATEDBASE_H

#include <ArmarXCore/statechart/xmlstates/XMLState.h>
#include "StateChartTutorialGroupStatechartContext.generated.h"
#include <ArmarXCore/observers/ObserverObjectFactories.h>

namespace armarx
{
    namespace StateChartTutorialGroup
    {
        template<typename StateType>
        class CounterStateGeneratedBase
            : virtual public XMLStateTemplate < StateType >,
              public XMLStateFactoryBase
        {
        protected:
            class CounterStateIn
            {
            private:
                CounterStateGeneratedBase<StateType> *parent;
                
            public:
                CounterStateIn(CounterStateGeneratedBase<StateType> *parent)
                    : parent(parent)
                {
                }
                
            public:
                ::armarx::ChannelRefPtr getcounterId() const
                {
                    return parent->State::getInput< ::armarx::ChannelRef>("counterId");
                }
                bool iscounterIdSet() const
                {
                    return parent->State::isInputParameterSet("counterId");
                }
                int getcounterMaxValue() const
                {
                    return parent->State::getInput< int>("counterMaxValue");
                }
                bool iscounterMaxValueSet() const
                {
                    return parent->State::isInputParameterSet("counterMaxValue");
                }
            }; // class CounterStateIn
            
            class CounterStateLocal
            {
            private:
                CounterStateGeneratedBase<StateType> *parent;
                
            public:
                CounterStateLocal(CounterStateGeneratedBase<StateType> *parent)
                    : parent(parent)
                {
                }
            }; // class CounterStateLocal
            
            class CounterStateOut
            {
            private:
                CounterStateGeneratedBase<StateType> *parent;
                
            public:
                CounterStateOut(CounterStateGeneratedBase<StateType> *parent)
                    : parent(parent)
                {
                }
            }; // class CounterStateOut
            
        protected:
            const CounterStateIn in;
            const CounterStateLocal local;
            const CounterStateOut out;
            
        public:
            CounterStateGeneratedBase(const XMLStateConstructorParams& stateData)
                : XMLStateTemplate < StateType > (stateData),
                  in(CounterStateIn(this)),
                  local(CounterStateLocal(this)),
                  out(CounterStateOut(this))
            {
            }
            CounterStateGeneratedBase(const CounterStateGeneratedBase &source)
                : IceUtil::Shared(source),
                  armarx::StateIceBase(source),
                  armarx::StateBase(source),
                  armarx::StateController(source),
                  armarx::State(source),
                  XMLStateTemplate < StateType > (source),
                  in(CounterStateIn(this)),
                  local(CounterStateLocal(this)),
                  out(CounterStateOut(this))
            {
            }
            
        public:
            void emitMaxCountReached()
            {
                State::sendEvent(State::createEvent("MaxCountReached"));
            }
            void installConditionForMaxCountReached(const Term& condition, const std::string& desc = "")
            {
                State::installCondition(condition, State::createEvent("MaxCountReached"), desc);
            }
            ::armarx::EventPtr createEventMaxCountReached()
            {
                return State::createEvent("MaxCountReached");
            }
            void emitMaxCountNotReached()
            {
                State::sendEvent(State::createEvent("MaxCountNotReached"));
            }
            void installConditionForMaxCountNotReached(const Term& condition, const std::string& desc = "")
            {
                State::installCondition(condition, State::createEvent("MaxCountNotReached"), desc);
            }
            ::armarx::EventPtr createEventMaxCountNotReached()
            {
                return State::createEvent("MaxCountNotReached");
            }
            static std::string GetName()
            {
                return "CounterState";
            }
            void __forceLibLoading()
            {
                // Do not call this method.
                // The sole purpose of this method is to force the compiler/linker to include all libraries.
                ::armarx::ChannelRef type1;
            }
        }; // class CounterStateGeneratedBase
    } // namespace StateChartTutorialGroup
} // namespace armarx

#endif // _ARMARX_XMLUSERCODE_ARMARX_STATECHARTTUTORIALGROUP_COUNTERSTATEGENERATEDBASE_H
