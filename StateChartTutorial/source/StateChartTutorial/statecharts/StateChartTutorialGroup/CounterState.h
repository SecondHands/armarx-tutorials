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
 * @package    StateChartTutorial::StateChartTutorialGroup
 * @author     Felix Duvallet ( felix dot duvallet at epfl dot ch )
 * @date       2015
 * @copyright  http://www.gnu.org/licenses/gpl-2.0.txt
 *             GNU General Public License
 */

#ifndef _ARMARX_XMLUSERCODE_StateChartTutorial_StateChartTutorialGroup_CounterState_H
#define _ARMARX_XMLUSERCODE_StateChartTutorial_StateChartTutorialGroup_CounterState_H

#include "CounterState.generated.h"

namespace armarx
{
    namespace StateChartTutorialGroup
    {
        class CounterState :
            public CounterStateGeneratedBase<CounterState>
        {
        public:
            CounterState(const XMLStateConstructorParams& stateData);

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
