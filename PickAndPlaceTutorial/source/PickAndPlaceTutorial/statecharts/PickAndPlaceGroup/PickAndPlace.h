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
 * @package    PickAndPlaceTutorial::PickAndPlaceGroup
 * @author     Felix Duvallet ( felix dot duvallet at epfl dot ch )
 * @date       2015
 * @copyright  http://www.gnu.org/licenses/gpl-2.0.txt
 *             GNU General Public License
 */

#ifndef _ARMARX_XMLUSERCODE_PickAndPlaceTutorial_PickAndPlaceGroup_PickAndPlace_H
#define _ARMARX_XMLUSERCODE_PickAndPlaceTutorial_PickAndPlaceGroup_PickAndPlace_H

#include "PickAndPlace.generated.h"

namespace armarx
{
    namespace PickAndPlaceGroup
    {
        class PickAndPlace :
            public PickAndPlaceGeneratedBase<PickAndPlace>
        {
        public:
            PickAndPlace(const XMLStateConstructorParams& stateData);

            // inherited from StateBase
            void onEnter();
            void run();
            void onBreak();
            void onExit();

            // static functions for AbstractFactory Method
            static XMLStateFactoryBasePtr CreateInstance(XMLStateConstructorParams stateData);
            static SubClassRegistry Registry;

            // DO NOT INSERT ANY CLASS MEMBERS,
            // use stateparameters instead,
            // if classmember are neccessary nonetheless, reset them in onEnter
        };
    }
}

#endif
