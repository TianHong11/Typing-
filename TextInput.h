//
// Created by tianh on 3/18/2023.
//

#ifndef SFML_PROJECT_TEXT_INPUT_H
#define SFML_PROJECT_TEXT_INPUT_H

#include "GUIComponent.h"
#include "History.h"
#include "TextBox.h"
#include "Title.h"
#include "Typing.h"
#include "TextInputSnapshot.h"
#include "Cursor.h"
//#include "WordSort.h"
class TextInput: public GUIComponent
{
private:
    TextBox box;
    Title title;
    Typing typing;
    Cursor cursor;

    Snapshot *getSnapshot() override;
    void applySnapshot(const Snapshot *snapshot) override;

public:
    TextInput();
    void addEventHandler(sf::RenderWindow &window, sf::Event event) override;
    void update() override;
    //void setPosition(sf::Vector2f position);
    void setColor(sf::Color color);
    void setLabel(const std::string& name);

//    sf::FloatRect getGlobalBounds();
    sf::FloatRect getGlobalBounds() const;

    std::string getString();

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

};


#endif //SFML_PROJECT_TEXT_INPUT_H
