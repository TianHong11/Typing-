//
// Created by tianh on 2/26/2023.
//

#include "Typing.h"

Typing::Typing()
{
//    setText();
}

//void Typing::setText()
//{
//    if(!font.loadFromFile("Times New Roman.ttf"))
//    {
//        std::cout<< "error font loading"<<std::endl;
//    }
////    text.setString(sentence);
//    text.setFillColor(sf::Color::White);
//    text.setFont(font);
//    text.setCharacterSize(30);
//}

//void Typing::addEventHandler(sf::RenderWindow &window, sf::Event event)
//{
//
//}

void Typing::addEventHandler(sf::RenderWindow &window, sf::Event event)
{
    if(event.type == sf::Event::TextEntered)
    {
//        History::push({this, getSnapshot()});

        if(event.text.unicode)
        {
            if(event.text.unicode==8 && !text.empty())
            {
                text.pop();
            }
            else if (event.text.unicode >= 32 && event.text.unicode <= 128)
            {
                Letter temp(static_cast<char> (event.text.unicode));
                text.push(temp);
            }

        }

    }
//    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::BackSpace) && !sentence.empty())
//    {
//        //check why no popping
//        std::cout<<"Pop"<<std::endl;
//        text.pop();
//    }

}

std::string Typing::getString()
{
    return text.getString();
}

void Typing::update()
{
//    text.setString(sentence);
}

//sf::FloatRect Typing::getGlobalBounds()
//{
//    return text.getGlobalBounds();
//}

void Typing::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    states.transform *= getTransform();
    window.draw(text, states);
}
//void Typing::setPosition(float x, float y)
//{
//    text.setPosition(x,y);
//}
MultiText &Typing::getMultiText() {
    return text;
}

Snapshot *Typing::getSnapshot()
{
//    TextInputSnapshot* p=new TextInputSnapshot;
//    p->setText(text.getString());
//    return p;
    return nullptr;
}

void Typing::applySnapshot(const Snapshot *snapshot)
{
//    text.setString(dynamic_cast<TextInputSnapshot*>(snapshot)->getText());
}

sf::Vector2f Typing::getLastPosition()
{
    return text.lastLetterPosition();
}
