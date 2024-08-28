//
// Created by tianh on 3/18/2023.
//

#include "TextInput.h"

TextInput::TextInput()
{
//    Position::centerText(box, typing);
//    Position::titleLeftOfBox(box,title);

    box.setPosition(80,0);
    title.setPosition(0,0);
    typing.setPosition(80,0);
    cursor.setPosition(80,0);
//    WordSort ws("List");

}

//void TextInput::setPosition(sf::Vector2f position)
//{
//    box.setPosition(position);
//}

Snapshot *TextInput::getSnapshot()
{
//    TextInputSnapshot* p= new TextInputSnapshot;
//    p->setText(typing.getText());
//    return p;
return nullptr;
}

//sf::FloatRect TextInput::getGlobalBounds() {
//    return cursor.getGlobalBounds();
//}

sf::FloatRect TextInput::getGlobalBounds() const
{
    return cursor.getGlobalBounds();
}

std::string TextInput::getString()
{
    return typing.getString();
}

void TextInput::applySnapshot(const Snapshot *snapshot)
{
//    typing.applySnapshot(snapshot);
}

void TextInput::addEventHandler(sf::RenderWindow &window, sf::Event event)
{
//    if(sf::Event::TextEntered== event.type)
//    {
//        History::push({this, getSnapshot()});
//    }

    typing.addEventHandler(window,event);
    cursor.addEventHandler(window,event);
    sf::FloatRect c= cursor.getGlobalBounds();
    sf::Vector2f curPos = typing.getMultiText().getTransform().transformPoint(0, 0);

    curPos += {3, 1};
    curPos += {typing.getMultiText().getSize1().width +75, 0};
//    curPos += {labelGB.width + labelGB.left + padding, 0};
    cursor.setPosition(curPos.x, curPos.y);

//    cursor.setPosition(typing.getLastPosition().x+ 30, typing.getLastPosition().y);

//    Position::cursorBehindLast(typing, cursor);
}

void TextInput::update()
{
    cursor.update();
    typing.update();
    //I have to overwrite the position of the cursor based on the last letter typed, but not sure what is the best way to do that
}

void TextInput::setLabel(const std::string& name)
{
    title.setString(name);
}

/*void TextInput::setPosition(float x, float y)
{
    title.setPosition(x, y);
}*/

//void TextInput::setLabelSize(int size)
//{
//    title.setSize(size);
//}

void TextInput::setColor(sf::Color color)
{

}

void TextInput::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    states.transform = getTransform();
    window.draw(box, states);
    window.draw(title, states);
    window.draw(typing, states);
    window.draw(cursor,states);

}
