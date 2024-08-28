//
// Created by tianh on 3/15/2023.
//

#include "States.h"

States::States()
{
    for(int i=0; i<LastState;i++)
    {
        //all the stateEnum loaded in map default to false
        states[static_cast<StatesEnum>(i)] = false;
    }
}

void States::enableStates(StatesEnum state)
{
    states[state]= true;
}

void States::disableStates(StatesEnum state)
{
    states[state]= false;
}

bool States::checkState(StatesEnum state)
{
    return states.at(state);
}

bool States::checkState(StatesEnum state) const {
    return states.at(state);
}
