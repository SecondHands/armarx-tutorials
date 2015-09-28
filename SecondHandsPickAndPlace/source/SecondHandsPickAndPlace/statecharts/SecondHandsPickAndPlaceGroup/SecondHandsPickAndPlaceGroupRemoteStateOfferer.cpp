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
 * @package    SecondHandsPickAndPlace::SecondHandsPickAndPlaceGroup::SecondHandsPickAndPlaceGroupRemoteStateOfferer
 * @author     Felix Duvallet ( felix dot duvallet at epfl dot ch )
 * @date       2015
 * @copyright  http://www.gnu.org/licenses/gpl-2.0.txt
 *             GNU General Public License
 */

#include "SecondHandsPickAndPlaceGroupRemoteStateOfferer.h"

using namespace armarx;
using namespace SecondHandsPickAndPlaceGroup;

// DO NOT EDIT NEXT LINE
SecondHandsPickAndPlaceGroupRemoteStateOfferer::SubClassRegistry SecondHandsPickAndPlaceGroupRemoteStateOfferer::Registry(SecondHandsPickAndPlaceGroupRemoteStateOfferer::GetName(), &SecondHandsPickAndPlaceGroupRemoteStateOfferer::CreateInstance);



SecondHandsPickAndPlaceGroupRemoteStateOfferer::SecondHandsPickAndPlaceGroupRemoteStateOfferer(StatechartGroupXmlReaderPtr reader) :
    XMLRemoteStateOfferer < SecondHandsPickAndPlaceGroupStatechartContext > (reader)
{
}

void SecondHandsPickAndPlaceGroupRemoteStateOfferer::onInitXMLRemoteStateOfferer()
{

}

void SecondHandsPickAndPlaceGroupRemoteStateOfferer::onConnectXMLRemoteStateOfferer()
{

}

void SecondHandsPickAndPlaceGroupRemoteStateOfferer::onExitXMLRemoteStateOfferer()
{

}

// DO NOT EDIT NEXT FUNCTION
std::string SecondHandsPickAndPlaceGroupRemoteStateOfferer::GetName()
{
    return "SecondHandsPickAndPlaceGroupRemoteStateOfferer";
}

// DO NOT EDIT NEXT FUNCTION
XMLStateOffererFactoryBasePtr SecondHandsPickAndPlaceGroupRemoteStateOfferer::CreateInstance(StatechartGroupXmlReaderPtr reader)
{
    return XMLStateOffererFactoryBasePtr(new SecondHandsPickAndPlaceGroupRemoteStateOfferer(reader));
}



