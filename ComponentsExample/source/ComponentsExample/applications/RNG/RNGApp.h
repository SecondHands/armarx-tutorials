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
 * @package    ComponentsExample::application::RNG
 * @author     Felix Duvallet ( felix dot duvallet at epfl dot ch )
 * @date       2015
 * @copyright  http://www.gnu.org/licenses/gpl-2.0.txt
 *             GNU General Public License
 */

#ifndef _ARMARX_APPLICATION_ComponentsExample_RNG_H
#define _ARMARX_APPLICATION_ComponentsExample_RNG_H


// #include <ComponentsExample/components/@MyComponent@/@MyComponent@.h>

#include <ArmarXCore/core/application/Application.h>
#include <ArmarXCore/core/Component.h>
#include <ComponentsExample/components/RNGProviderComponent/RNGProviderComponent.h>

namespace armarx
{
    /**
     * @class RNGApp
     * @brief A brief description
     *
     * Detailed Description
     */
    class RNGApp :
        virtual public armarx::Application
    {
        /**
         * @see armarx::Application::setup()
         */
        void setup(const armarx::ManagedIceObjectRegistryInterfacePtr& registry,
                   Ice::PropertiesPtr properties)
        {
            registry->addObject( armarx::Component::create<RNGProviderComponent>(properties) );
        }
    };
}

#endif
