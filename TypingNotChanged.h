//
// Created by tianh on 3/18/2023.
//

#ifndef SFML_PROJECT_TYPINGNOTCHANGED_H
#define SFML_PROJECT_TYPINGNOTCHANGED_H


#include <iostream>
#include <SFML/Graphics.hpp>
class TypingNotChanged: public sf::Drawable
{
private:
    std::vector<std::string> letters= {"A","B","C","D","E",
                                       "F","G","H","I","J",
                                       "K","L","M","N","O",
                                       "P","Q","R","S","T",
                                       "U","V","W","X","Y","Z"};
    sf::Text text;
    sf::Font font;
    std::string sentence;

public:
    TypingNotChanged();
    void setText();
    void addEventHandler(sf::RenderWindow& window, sf::Event event);

    void update();

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};


#endif //SFML_PROJECT_TYPINGNOTCHANGED_H
