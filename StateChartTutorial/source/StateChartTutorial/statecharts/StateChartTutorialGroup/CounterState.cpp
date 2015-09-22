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

#include "CounterState.h"

using namespace armarx;
using namespace StateChartTutorialGroup;

// DO NOT EDIT NEXT LINE
CounterState::SubClassRegistry CounterState::Registry(CounterState::GetName(), &CounterState::CreateInstance);



CounterState::CounterState(const XMLStateConstructorParams& stateData) :
    XMLStateTemplate<CounterState>(stateData),  CounterStateGeneratedBase<CounterState>(stateData)
{
}

void CounterState::onEnter()
{
    // put your user code for the enter-point here
    // execution time should be short (<100ms)
    }

void CounterState::run()
{
    // put your user code for the execution-phase here
    // runs in seperate thread, thus can do complex operations
    // should check constantly whether isRunningTaskStopped() returns true

    ChannelRefPtr counterId = in.getcounterId();
    const int maxValue = in.getcounterMaxValue();

    getContext()->systemObserverPrx->incrementCounter(counterId);

    const int counterValue = counterId->getDataField("value")->getInt();
    ARMARX_LOG << "CounterState::run() with value " << counterValue;
    if(counterValue >= maxValue) {
        emitMaxCountReached();
    } else {
        emitMaxCountNotReached();
    }
}

void CounterState::onBreak()
{
    // put your user code for the breaking point here
    // execution time should be short (<100ms)
}

void CounterState::onExit()
{
    // put your user code for the exit point here
    // execution time should be short (<100ms)

}


// DO NOT EDIT NEXT FUNCTION
XMLStateFactoryBasePtr CounterState::CreateInstance(XMLStateConstructorParams stateData)
{
    return XMLStateFactoryBasePtr(new CounterState(stateData));
}

