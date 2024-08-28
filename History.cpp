//
// Created by tianh on 3/18/2023.
//

#include "History.h"

HistoryNode& History::top()
{
    return stack.top();
}

void History::push(const HistoryNode &node)
{
    stack.push(node);
}

void History::pop()
{
    if(!empty())
    {
        top().component->applySnapshot(top().snapshot);
        delete top().snapshot;
        stack.pop();
    }
}

void History::eventHandler(sf::RenderWindow &window, sf::Event event)
{
    if(Keyboard_Shortcut::isUndo())
    {
        pop();
    }
}

bool History::empty()
{
    return stack.empty();
}

void History::applySnapshot()
{
    //// forgot what is this
    stack.top().component->applySnapshot(stack.top().snapshot);
}
