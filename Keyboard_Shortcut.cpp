//
// Created by tianh on 3/18/2023.
//

#include "Keyboard_Shortcut.h"

bool Keyboard_Shortcut::isUndo() {
    if((sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) || sf::Keyboard::isKeyPressed(sf::Keyboard::RControl))
    && sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
    {
        return true;
    }
    else
    {
        return false;
    }
}
