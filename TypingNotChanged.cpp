//
// Created by tianh on 3/18/2023.
//

#include "TypingNotChanged.h"
TypingNotChanged::TypingNotChanged()
{
    setText();
}

void TypingNotChanged::setText()
{
    if(!font.loadFromFile("Times New Roman.ttf"))
    {
        std::cout<< "error font loading"<<std::endl;
    }
    text.setString(sentence);
    text.setFillColor(sf::Color::White);
    text.setFont(font);
    text.setCharacterSize(30);
    text.setPosition(100,300);
}

void TypingNotChanged::addEventHandler(sf::RenderWindow &window, sf::Event event)
{

    if(event.type == sf::Event::TextEntered)
    {
        if(event.text.unicode)
        {
            sentence.push_back(static_cast<char>(event.text.unicode));
        }
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::BackSpace) && !sentence.empty())
    {
        sentence.pop_back();
    }
}

void TypingNotChanged::update()
{
    text.setString(sentence);
}

void TypingNotChanged::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(text);
}
