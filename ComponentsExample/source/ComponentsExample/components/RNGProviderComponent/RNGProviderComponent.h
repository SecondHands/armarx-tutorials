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
 * @package    ComponentsExample::ArmarXObjects::RNGProviderComponent
 * @author     Felix Duvallet ( felix dot duvallet at epfl dot ch )
 * @date       2015
 * @copyright  http://www.gnu.org/licenses/gpl-2.0.txt
 *             GNU General Public License
 */

#ifndef _ARMARX_COMPONENT_ComponentsExample_RNGProviderComponent_H
#define _ARMARX_COMPONENT_ComponentsExample_RNGProviderComponent_H

#include <ArmarXCore/core/Component.h>
#include <ComponentsExample/interface/RNGComponentProviderInterface.h>

namespace armarx
{
    /**
     * @class RNGProviderComponentPropertyDefinitions
     * @brief
     */
    class RNGProviderComponentPropertyDefinitions:
        public armarx::ComponentPropertyDefinitions
    {
    public:
        RNGProviderComponentPropertyDefinitions(std::string prefix):
            armarx::ComponentPropertyDefinitions(prefix)
        {
            //defineRequiredProperty<std::string>("PropertyName", "Description");
            //defineOptionalProperty<std::string>("PropertyName", "DefaultValue", "Description");
        }
    };

    /**
     * @defgroup Component-RNGProviderComponent RNGProviderComponent
     * @ingroup ComponentsExample-Components
     * A description of the component RNGProviderComponent.
     * 
     * @class RNGProviderComponent
     * @ingroup Component-RNGProviderComponent
     * @brief Brief description of class RNGProviderComponent.
     * 
     * Detailed description of class RNGProviderComponent.
     */
    class RNGProviderComponent :
        virtual public armarx::Component,
        virtual public armarx::RNGProviderComponentInterface
    {
    public:
        /**
         * @see armarx::ManagedIceObject::getDefaultName()
         */
        virtual std::string getDefaultName() const
        {
            return "RNGProviderComponent";
        }

    protected:
        /**
         * @see armarx::ManagedIceObject::onInitComponent()
         */
        virtual void onInitComponent();

        /**
         * @see armarx::ManagedIceObject::onConnectComponent()
         */
        virtual void onConnectComponent();

        /**
         * @see armarx::ManagedIceObject::onDisconnectComponent()
         */
        virtual void onDisconnectComponent();

        /**
         * @see armarx::ManagedIceObject::onExitComponent()
         */
        virtual void onExitComponent();

        /**
         * @see PropertyUser::createPropertyDefinitions()
         */
        virtual armarx::PropertyDefinitionsPtr createPropertyDefinitions();
    };
}

#endif
