#ifndef ARMARX_COMPONENT_ARMARX_STATECHARTTUTORIALGROUP_STATECHARTTUTORIALGROUPSTATECHARTCONTEXT_H
#define ARMARX_COMPONENT_ARMARX_STATECHARTTUTORIALGROUP_STATECHARTTUTORIALGROUPSTATECHARTCONTEXT_H

#include <ArmarXCore/core/Component.h>
#include <ArmarXCore/core/system/ImportExportComponent.h>
#include <ArmarXCore/statechart/StatechartContext.h>

namespace armarx
{
    namespace StateChartTutorialGroup
    {
        class StateChartTutorialGroupStatechartContext
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
                }
            }; // class PropertyDefinitions
            
        public:
            std::string getDefaultName() const
            {
                return "StateChartTutorialGroupStatechartContext";
            }
            virtual void onInitStatechartContext()
            {
            }
            virtual void onConnectStatechartContext()
            {
            }
            virtual PropertyDefinitionsPtr createPropertyDefinitions()
            {
                return PropertyDefinitionsPtr(new StateChartTutorialGroupStatechartContext::PropertyDefinitions(getConfigIdentifier()));
            }
        }; // class StateChartTutorialGroupStatechartContext
    } // namespace StateChartTutorialGroup
} // namespace armarx

#endif // ARMARX_COMPONENT_ARMARX_STATECHARTTUTORIALGROUP_STATECHARTTUTORIALGROUPSTATECHARTCONTEXT_H
