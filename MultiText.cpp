 //
// Created by tianh on 3/1/2023.
//

#include "MultiText.h"

MultiText::MultiText()
{

}

void MultiText::push(Letter letter)
{
    Letter temp =letter;
    if(sentence.size()==0)
    {
        sentence.push_back(letter);
    }
    else
    {
        sf::Glyph glyph= Font::getGlyph(sentence.back().getString()[0], sentence.back().getCharacterSize());

        letter.sf::Transformable::setPosition(sentence.back().getPosition().x + glyph.advance, sentence.back().getPosition().y);

        sentence.push_back(letter);
    }
}
 sf::FloatRect MultiText::getSize1() {
     sf::FloatRect temp = {0, 0, 0, static_cast<float>(24)};

     if (!empty()) {
         float lastCharX = sentence.back().getPosition().x;
         lastCharX += sentence.back().getGlobalBounds().width;

         temp.width = lastCharX;
     }

     return temp;
 }
 std::string MultiText::getString()
 {
    std::string word;

    for(std::_List_iterator<Letter> iter=sentence.begin(); iter != sentence.end(); iter++)
    {
        word.push_back(iter->getString()[0]);
    }
    return word;
 }
// sf::FloatRect MultiText:: getGlobalBounds()
// {
//    return sentence.front().getGlobalBounds();
// }
//
// void MultiText:: setPosition(float x, float y)
// {
//    sentence.front().setPosition(x,y);
// }

void MultiText::pop()
{
    sentence.pop_back();
}

bool MultiText::empty()
{
    return sentence.empty();
}

 int MultiText::getSize()
 {
    return sentence.size();
}

 sf::Vector2f MultiText::lastLetterPosition() {
     float lastX = sentence.back().getPosition().x;
     float lastY = sentence.back().getPosition().y;

     sf::Vector2f lastPosition = {lastX, lastY};

     return lastPosition;
 }

 void MultiText::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    states.transform *= getTransform();

    for(auto it= sentence.begin(); it!=sentence.end();++it)
    {
        window.draw(*it, states);
    }

}
 Snapshot *MultiText::getSnapshot() {
     return nullptr;
 }

 void MultiText::update()
 {

 }

 void MultiText::applySnapshot(const Snapshot *snapshot) {

 }

 void MultiText::addEventHandler(sf::RenderWindow &window, sf::Event event) {

 }
