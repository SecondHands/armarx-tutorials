#ifndef ARMARX_COMPONENT_ARMARX_PICKANDPLACEGROUP_PICKANDPLACEGROUPSTATECHARTCONTEXT_H
#define ARMARX_COMPONENT_ARMARX_PICKANDPLACEGROUP_PICKANDPLACEGROUPSTATECHARTCONTEXT_H

#include <ArmarXCore/core/Component.h>
#include <ArmarXCore/core/system/ImportExportComponent.h>
#include <ArmarXCore/statechart/StatechartContext.h>
#include <ArmarXSimulation/interface/simulator/SimulatorInterface.h>
#include <MemoryX/interface/component/PriorKnowledgeInterface.h>

namespace armarx
{
    namespace PickAndPlaceGroup
    {
        class PickAndPlaceGroupStatechartContext
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
                    defineOptionalProperty<std::string>("SimulatorInterfaceName", "Simulator", "Name of the simulator interface that should be used");
                    defineOptionalProperty<std::string>("PriorKnowledgeName", "PriorKnowledge", "Name of the prior knowledge that should be used");
                }
            }; // class PropertyDefinitions
            
        private:
            armarx::SimulatorInterfacePrx simulatorInterface;
            memoryx::PriorKnowledgeInterfacePrx priorKnowledge;
            
        public:
            std::string getDefaultName() const
            {
                return "PickAndPlaceGroupStatechartContext";
            }
            virtual void onInitStatechartContext()
            {
                usingProxy(getProperty<std::string>("SimulatorInterfaceName").getValue());
                usingProxy(getProperty<std::string>("PriorKnowledgeName").getValue());
            }
            virtual void onConnectStatechartContext()
            {
                simulatorInterface = getProxy<armarx::SimulatorInterfacePrx>(getProperty<std::string>("SimulatorInterfaceName").getValue());
                priorKnowledge = getProxy<memoryx::PriorKnowledgeInterfacePrx>(getProperty<std::string>("PriorKnowledgeName").getValue());
            }
            armarx::SimulatorInterfacePrx getSimulatorInterface() const { return simulatorInterface; }
            memoryx::PriorKnowledgeInterfacePrx getPriorKnowledge() const { return priorKnowledge; }
            virtual PropertyDefinitionsPtr createPropertyDefinitions()
            {
                return PropertyDefinitionsPtr(new PickAndPlaceGroupStatechartContext::PropertyDefinitions(getConfigIdentifier()));
            }
        }; // class PickAndPlaceGroupStatechartContext
    } // namespace PickAndPlaceGroup
} // namespace armarx

#endif // ARMARX_COMPONENT_ARMARX_PICKANDPLACEGROUP_PICKANDPLACEGROUPSTATECHARTCONTEXT_H
