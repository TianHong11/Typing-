//
// Created by tianh on 3/1/2023.
//

#include "Letter.h"

Letter::Letter()
{
    setFont(Font::getFont(OpenSans));
    setCharacterSize(24);
    setFillColor(sf::Color::White);
    setString("0"); ////unnecessary
}

Letter::Letter(char character)
{
    setString(character);
    setCharacterSize(24);
    setFont(Font::getFont(OpenSans));
    if(isdigit(character))
    {
        setFillColor(sf::Color::Red);
    }
    else if(isOperator(character))
    {
        setFillColor(sf::Color::Green);
    }
    else
    {
        setFillColor(sf::Color::Blue);
    }
//    getFont();

}

sf::FloatRect Letter::getGlobalBounds()
{
    return sf::Text::getGlobalBounds();
}

bool Letter::isOperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/')
    {
        return true;
    }
    return false;
}
//Letter::Letter(int size, sf::Color color, sf::Font font, sf::Vector2f position) {
//
//}

//void Letter::setSize(const int &size)
//{
//    this->size= size;
//}

//
//void Letter::setFillColor(const sf::Color &color)
//{
//    this->color= color;
//}
//
//void Letter::setFont(const sf::Font &font)
//{
//    this->font= font;
//}
//
//void Letter::setPosition(const sf::Vector2f &position)
//{
//    this->position= position;
//}
//
//sf::Vector2f Letter::getPosition() const
//{
//    return position;
//}