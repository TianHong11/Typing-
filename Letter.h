//
// Created by tianh on 3/1/2023.
//

#ifndef SFML_PROJECT_LETTER_H
#define SFML_PROJECT_LETTER_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Font.h"

class Letter: public sf::Text
{
private:
    sf::Font font;
    sf::Color color;
    int size;
    sf::Vector2f position;

    bool isOperator(char c);
public:
    Letter();
    Letter(char character);

    sf::FloatRect getGlobalBounds();

//    Letter(int size, sf::Color color, sf::Font font, sf::Vector2f position);
//    void setSize(const int& size);
//    void setFillColor(const sf::Color& color);
//    void setFont(const sf::Font& font);
//    void setPosition(const sf::Vector2f& position);
//
//    int getSize() const;
//    sf::Color getColor() const;
//    sf::Font getFont()const;
//    sf::Vector2f getPosition() const;

//    sf::Font getFont();
//    void setText();
//    void push(char character);
//
//    Letter(char i);
};


#endif //SFML_PROJECT_LETTER_H
