//
// Created by tianh on 3/15/2023.
//

#ifndef SFML_PROJECT_GUICOMPONENT_H
#define SFML_PROJECT_GUICOMPONENT_H

#include "SFML/Graphics.hpp"
#include "States.h"
#include "Snapshot_Interface.h"

class GUIComponent: public sf::Drawable, public sf::Transformable, public States, public SnapshotInterface
{
public:
    //from EventHandler
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
    virtual void update() = 0;
};


#endif //SFML_PROJECT_GUICOMPONENT_H
