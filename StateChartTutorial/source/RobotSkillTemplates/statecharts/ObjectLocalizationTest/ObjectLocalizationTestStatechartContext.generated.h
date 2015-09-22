#ifndef ARMARX_COMPONENT_ARMARX_OBJECTLOCALIZATIONTEST_OBJECTLOCALIZATIONTESTSTATECHARTCONTEXT_H
#define ARMARX_COMPONENT_ARMARX_OBJECTLOCALIZATIONTEST_OBJECTLOCALIZATIONTESTSTATECHARTCONTEXT_H

#include <ArmarXCore/core/Component.h>
#include <ArmarXCore/core/system/ImportExportComponent.h>
#include <ArmarXCore/statechart/StatechartContext.h>
#include <MemoryX/interface/observers/ObjectMemoryObserverInterface.h>
#include <MemoryX/interface/component/WorkingMemoryInterface.h>
#include <RobotComponents/interface/components/ViewSelectionInterface.h>

namespace armarx
{
    namespace ObjectLocalizationTest
    {
        class ObjectLocalizationTestStatechartContext
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
                    defineOptionalProperty<std::string>("ObjectMemoryObserverName", "ObjectMemoryObserver", "Name of the object memory observer that should be used");
                    defineOptionalProperty<std::string>("WorkingMemoryName", "WorkingMemory", "Name of the working memory that should be used");
                    defineOptionalProperty<std::string>("ViewSelectionName", "ViewSelection", "Name of the view selection that should be used");
                }
            }; // class PropertyDefinitions
            
        private:
            memoryx::ObjectMemoryObserverInterfacePrx objectMemoryObserver;
            memoryx::WorkingMemoryInterfacePrx WorkingMemory;
            ViewSelectionInterfacePrx viewSelection;
            
        public:
            std::string getDefaultName() const
            {
                return "ObjectLocalizationTestStatechartContext";
            }
            virtual void onInitStatechartContext()
            {
                usingProxy(getProperty<std::string>("ObjectMemoryObserverName").getValue());
                usingProxy(getProperty<std::string>("WorkingMemoryName").getValue());
                usingProxy(getProperty<std::string>("ViewSelectionName").getValue());
            }
            virtual void onConnectStatechartContext()
            {
                objectMemoryObserver = getProxy<memoryx::ObjectMemoryObserverInterfacePrx>(getProperty<std::string>("ObjectMemoryObserverName").getValue());
                WorkingMemory = getProxy<memoryx::WorkingMemoryInterfacePrx>(getProperty<std::string>("WorkingMemoryName").getValue());
                viewSelection = getProxy<ViewSelectionInterfacePrx>(getProperty<std::string>("ViewSelectionName").getValue());
            }
            memoryx::ObjectMemoryObserverInterfacePrx getObjectMemoryObserver() const { return objectMemoryObserver; }
            memoryx::WorkingMemoryInterfacePrx getWorkingMemory() const { return WorkingMemory; }
            ViewSelectionInterfacePrx getViewSelection() const { return viewSelection; }
            virtual PropertyDefinitionsPtr createPropertyDefinitions()
            {
                return PropertyDefinitionsPtr(new ObjectLocalizationTestStatechartContext::PropertyDefinitions(getConfigIdentifier()));
            }
        }; // class ObjectLocalizationTestStatechartContext
    } // namespace ObjectLocalizationTest
} // namespace armarx

#endif // ARMARX_COMPONENT_ARMARX_OBJECTLOCALIZATIONTEST_OBJECTLOCALIZATIONTESTSTATECHARTCONTEXT_H
