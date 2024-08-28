//
// Created by tianh on 3/15/2023.
//

#ifndef SFML_PROJECT_STATES_H
#define SFML_PROJECT_STATES_H

#include <iostream>
#include <map>
enum StatesEnum
{
    Hidden,
    LastState
};

class States
{
private:
    //std::map<key, value>
    std::map<StatesEnum, bool> states;

public:
    States();
    void enableStates(StatesEnum state);
    void disableStates(StatesEnum state);
    bool checkState(StatesEnum state);
    bool checkState(StatesEnum state) const;

};


#endif //SFML_PROJECT_STATES_H
