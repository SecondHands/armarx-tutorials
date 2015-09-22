#ifndef _ARMARX_XMLUSERCODE_ARMARX_STATECHARTTUTORIALGROUP_COUNTERSTATEGENERATEDBASE_H
#define _ARMARX_XMLUSERCODE_ARMARX_STATECHARTTUTORIALGROUP_COUNTERSTATEGENERATEDBASE_H

#include <ArmarXCore/statechart/xmlstates/XMLState.h>
#include "StateChartTutorialGroupStatechartContext.generated.h"

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
            static std::string GetName()
            {
                return "CounterState";
            }
        }; // class CounterStateGeneratedBase
    } // namespace StateChartTutorialGroup
} // namespace armarx

#endif // _ARMARX_XMLUSERCODE_ARMARX_STATECHARTTUTORIALGROUP_COUNTERSTATEGENERATEDBASE_H
