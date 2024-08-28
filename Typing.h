//
// Created by tianh on 2/26/2023.
//

#ifndef SFML_PROJECT_TYPING_H
#define SFML_PROJECT_TYPING_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "MultiText.h"
#include "Keyboard_Shortcut.h"
#include "DropDownMenu/Position.h"
#include "GUIComponent.h"

#include "TextInputSnapshot.h"
#include "History.h"

class Typing: public GUIComponent
{
private:
    MultiText text;
    std::string sentence;
    sf::Font font;

    Snapshot *getSnapshot() override;
    void applySnapshot(const Snapshot *snapshot) override;

public:
    Typing();

    MultiText& getMultiText();

//    void setText();
    //void addEventHandler(sf::RenderWindow& window, sf::Event event);
    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;

    void update();
//    void setPosition(float x, float y );
//    sf::FloatRect getGlobalBounds();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    sf::Vector2f getLastPosition();
    std::string getString();

//    std::string
};


#endif //SFML_PROJECT_TYPING_H
