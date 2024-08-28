//
// Created by tianh on 3/1/2023.
//

#ifndef SFML_PROJECT_MULTITEXT_H
#define SFML_PROJECT_MULTITEXT_H

#include "Letter.h"
#include <list>
#include <SFML/Graphics.hpp>
#include <vector>

#include "GUIComponent.h"

class MultiText : public GUIComponent
{
private:
    std::list<Letter> sentence;

    Letter l;

    Snapshot *getSnapshot() override;
    void applySnapshot(const Snapshot *snapshot) override;

//    sf::Color color;
//    sf::Font font;
//    int size;
//    sf::Vector2f position;
public:
    MultiText();
    void push(Letter letter);
    void pop();
    bool empty();
    void update();
    int getSize();
    sf::FloatRect getSize1();

    //void setPosition(float x, float y);

    //sf::FloatRect getGlobalBounds();

    std::string getString();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void addEventHandler(sf::RenderWindow& window, sf::Event event);

    sf::Vector2f lastLetterPosition();

};


#endif //SFML_PROJECT_MULTITEXT_H
