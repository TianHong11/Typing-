//
// Created by tianh on 3/20/2023.
//

#ifndef SFML_PROJECT_CURSOR_H
#define SFML_PROJECT_CURSOR_H

#include <SFML/Graphics.hpp>
#include "GUIComponent.h"
#include "Font.h"
#include "DropDownMenu/MouseEvent.h"

class Cursor : public GUIComponent
{
private:
//    sf::RectangleShape cursor;
    sf::Text cursor;

    sf::Clock clock;

public:
    Cursor();

    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update() override;

    Snapshot *getSnapshot() override;

    void applySnapshot(const Snapshot *snapshot) override;

    sf::Vector2f getPosition();

    sf::FloatRect getGlobalBounds() const;
//    void setPosition(sf::Vector2f position);
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;
};


#endif //SFML_PROJECT_CURSOR_H
