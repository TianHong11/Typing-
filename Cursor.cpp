//
// Created by tianh on 3/20/2023.
//

#include "Cursor.h"

Cursor::Cursor()
{
//    cursor.setSize({3, 25});
//    cursor.setFillColor(sf::Color::Yellow);

    cursor.setFont(Font::getCursorFont());
    cursor.setString("|");
    cursor.setCharacterSize(24);
}

/*void Cursor::setPosition(float x, float y)
{
    cursor.setPosition(x,y);
}*/

void Cursor::addEventHandler(sf::RenderWindow &window, sf::Event event)
{

}

void Cursor::update()
{
//    if(!checkState(Hidden))
//    {
//        disableStates(Hidden);
//        if(clock.getElapsedTime().asMilliseconds() > 500)
//        {
//            enableStates(Hidden);
//        }
//    }

    if(clock.getElapsedTime() >= sf::milliseconds(500)){
        //restart the clock
        clock.restart();
        //if it was hidden we display it
        if (checkState(Hidden)) {
            disableStates(Hidden);
        }
        // if it was displayed we hide it
        else
        {
            enableStates(Hidden);
        }
    }
}

Snapshot *Cursor::getSnapshot() {
    return nullptr;
}

void Cursor::applySnapshot(const Snapshot *snapshot) {

}

sf::FloatRect Cursor::getGlobalBounds() const {
    return cursor.getGlobalBounds();
}
//
//void Cursor::setPosition(sf::Vector2f position)
//{
//    cursor.setPosition(position);
//}

sf::Vector2f Cursor::getPosition() {
    return cursor.getPosition(); //it doesnt knwo about the position of the cursor
}

void Cursor::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    if(!checkState(Hidden))
    {
        states.transform *= getTransform();
        window.draw(cursor, states);
    }
}
