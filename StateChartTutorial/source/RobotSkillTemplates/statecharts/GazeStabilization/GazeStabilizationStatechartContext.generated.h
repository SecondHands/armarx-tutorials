#ifndef ARMARX_COMPONENT_ARMARX_GAZESTABILIZATION_GAZESTABILIZATIONSTATECHARTCONTEXT_H
#define ARMARX_COMPONENT_ARMARX_GAZESTABILIZATION_GAZESTABILIZATIONSTATECHARTCONTEXT_H

#include <ArmarXCore/core/Component.h>
#include <ArmarXCore/core/system/ImportExportComponent.h>
#include <ArmarXCore/statechart/StatechartContext.h>
#include <RobotAPI/interface/units/InertialMeasurementUnit.h>

namespace armarx
{
    namespace GazeStabilization
    {
        class GazeStabilizationStatechartContext
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
                    defineOptionalProperty<std::string>("IMUObserverName", "InertialMeasurementUnitObserver", "Name of the imu observer that should be used");
                }
            }; // class PropertyDefinitions
            
        private:
            InertialMeasurementUnitObserverInterfacePrx inertialMeasurementObserverUnit;
            
        public:
            std::string getDefaultName() const
            {
                return "GazeStabilizationStatechartContext";
            }
            virtual void onInitStatechartContext()
            {
                usingProxy(getProperty<std::string>("IMUObserverName").getValue());
            }
            virtual void onConnectStatechartContext()
            {
                inertialMeasurementObserverUnit = getProxy<InertialMeasurementUnitObserverInterfacePrx>(getProperty<std::string>("IMUObserverName").getValue());
            }
            InertialMeasurementUnitObserverInterfacePrx getIMUObserver() const { return inertialMeasurementObserverUnit; }
            virtual PropertyDefinitionsPtr createPropertyDefinitions()
            {
                return PropertyDefinitionsPtr(new GazeStabilizationStatechartContext::PropertyDefinitions(getConfigIdentifier()));
            }
        }; // class GazeStabilizationStatechartContext
    } // namespace GazeStabilization
} // namespace armarx

#endif // ARMARX_COMPONENT_ARMARX_GAZESTABILIZATION_GAZESTABILIZATIONSTATECHARTCONTEXT_H
