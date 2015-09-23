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
 * @package    PickAndPlaceTutorial::PickAndPlaceGroup::PickAndPlaceGroupRemoteStateOfferer
 * @author     Felix Duvallet ( felix dot duvallet at epfl dot ch )
 * @date       2015
 * @copyright  http://www.gnu.org/licenses/gpl-2.0.txt
 *             GNU General Public License
 */

#include "PickAndPlaceGroupRemoteStateOfferer.h"

using namespace armarx;
using namespace PickAndPlaceGroup;

// DO NOT EDIT NEXT LINE
PickAndPlaceGroupRemoteStateOfferer::SubClassRegistry PickAndPlaceGroupRemoteStateOfferer::Registry(PickAndPlaceGroupRemoteStateOfferer::GetName(), &PickAndPlaceGroupRemoteStateOfferer::CreateInstance);



PickAndPlaceGroupRemoteStateOfferer::PickAndPlaceGroupRemoteStateOfferer(StatechartGroupXmlReaderPtr reader) :
    XMLRemoteStateOfferer < PickAndPlaceGroupStatechartContext > (reader)
{
}

void PickAndPlaceGroupRemoteStateOfferer::onInitXMLRemoteStateOfferer()
{

}

void PickAndPlaceGroupRemoteStateOfferer::onConnectXMLRemoteStateOfferer()
{

}

void PickAndPlaceGroupRemoteStateOfferer::onExitXMLRemoteStateOfferer()
{

}

// DO NOT EDIT NEXT FUNCTION
std::string PickAndPlaceGroupRemoteStateOfferer::GetName()
{
    return "PickAndPlaceGroupRemoteStateOfferer";
}

// DO NOT EDIT NEXT FUNCTION
XMLStateOffererFactoryBasePtr PickAndPlaceGroupRemoteStateOfferer::CreateInstance(StatechartGroupXmlReaderPtr reader)
{
    return XMLStateOffererFactoryBasePtr(new PickAndPlaceGroupRemoteStateOfferer(reader));
}



