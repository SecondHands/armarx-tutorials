#ifndef _ARMARX_XMLUSERCODE_ARMARX_STATECHARTTUTORIALGROUP_MAINSTATEGENERATEDBASE_H
#define _ARMARX_XMLUSERCODE_ARMARX_STATECHARTTUTORIALGROUP_MAINSTATEGENERATEDBASE_H

#include <ArmarXCore/statechart/xmlstates/XMLState.h>
#include "StateChartTutorialGroupStatechartContext.generated.h"
#include <ArmarXCore/observers/ObserverObjectFactories.h>

namespace armarx
{
    namespace StateChartTutorialGroup
    {
        template<typename StateType>
        class MainStateGeneratedBase
            : virtual public XMLStateTemplate < StateType >,
              public XMLStateFactoryBase
        {
        protected:
            class MainStateIn
            {
            private:
                MainStateGeneratedBase<StateType> *parent;
                
            public:
                MainStateIn(MainStateGeneratedBase<StateType> *parent)
                    : parent(parent)
                {
                }
                
            public:
                int getcouterMaxValue() const
                {
                    return parent->State::getInput< int>("couterMaxValue");
                }
                bool iscouterMaxValueSet() const
                {
                    return parent->State::isInputParameterSet("couterMaxValue");
                }
            }; // class MainStateIn
            
            class MainStateLocal
            {
            private:
                MainStateGeneratedBase<StateType> *parent;
                
            public:
                MainStateLocal(MainStateGeneratedBase<StateType> *parent)
                    : parent(parent)
                {
                }
                
            public:
                ::armarx::ChannelRefPtr getcouterId() const
                {
                    return parent->State::getLocal< ::armarx::ChannelRef>("couterId");
                }
                void setcouterId(const ::armarx::ChannelRef & value) const
                {
                    parent->State::setLocal("couterId", value);
                }
                void setcouterId(const ::armarx::ChannelRefPtr & value) const
                {
                    parent->State::setLocal("couterId", *value);
                }
                bool iscouterIdSet() const
                {
                    return parent->State::isLocalParameterSet("couterId");
                }
            }; // class MainStateLocal
            
            class MainStateOut
            {
            private:
                MainStateGeneratedBase<StateType> *parent;
                
            public:
                MainStateOut(MainStateGeneratedBase<StateType> *parent)
                    : parent(parent)
                {
                }
            }; // class MainStateOut
            
        protected:
            const MainStateIn in;
            const MainStateLocal local;
            const MainStateOut out;
            
        public:
            MainStateGeneratedBase(const XMLStateConstructorParams& stateData)
                : XMLStateTemplate < StateType > (stateData),
                  in(MainStateIn(this)),
                  local(MainStateLocal(this)),
                  out(MainStateOut(this))
            {
            }
            MainStateGeneratedBase(const MainStateGeneratedBase &source)
                : IceUtil::Shared(source),
                  armarx::StateIceBase(source),
                  armarx::StateBase(source),
                  armarx::StateController(source),
                  armarx::State(source),
                  XMLStateTemplate < StateType > (source),
                  in(MainStateIn(this)),
                  local(MainStateLocal(this)),
                  out(MainStateOut(this))
            {
            }
            
        public:
            static std::string GetName()
            {
                return "MainState";
            }
            void __forceLibLoading()
            {
                // Do not call this method.
                // The sole purpose of this method is to force the compiler/linker to include all libraries.
                ::armarx::ChannelRef type1;
            }
        }; // class MainStateGeneratedBase
    } // namespace StateChartTutorialGroup
} // namespace armarx

#endif // _ARMARX_XMLUSERCODE_ARMARX_STATECHARTTUTORIALGROUP_MAINSTATEGENERATEDBASE_H
