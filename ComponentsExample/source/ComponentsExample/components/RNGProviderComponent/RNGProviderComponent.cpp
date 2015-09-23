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

#include "RNGProviderComponent.h"

using namespace armarx;




void RNGProviderComponent::onInitComponent()
{
    std::time_t now = std::time(0);
    gen = boost::random::mt19937{static_cast<std::uint32_t>(now)};
}


void RNGProviderComponent::onConnectComponent()
{
    ARMARX_IMPORTANT << "RNG provider connected: " << generateRandomInt();
}


void RNGProviderComponent::onDisconnectComponent()
{

}


void RNGProviderComponent::onExitComponent()
{

}

armarx::PropertyDefinitionsPtr RNGProviderComponent::createPropertyDefinitions()
{
    return armarx::PropertyDefinitionsPtr(new RNGProviderComponentPropertyDefinitions(
                                      getConfigIdentifier()));
}

::Ice::Int RNGProviderComponent::generateRandomInt(const Ice::Current &) {
    unsigned int rnd = gen();
    ARMARX_IMPORTANT << "RNG provider generated output: " << rnd;
    return rnd;
}
