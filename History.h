//
// Created by tianh on 3/18/2023.
//

#ifndef SFML_PROJECT_HISTORY_H
#define SFML_PROJECT_HISTORY_H

#include "HistoryNode.h"
#include <stack>
#include "Keyboard_Shortcut.h"
class History
{
private:
    //inline can only be used in C++17, inline is like saying static but if you use inline
    // you won't have to write the variable at the top of the CPP file
    inline static std::stack<HistoryNode> stack;

public:
    static HistoryNode& top();
    static void push(const HistoryNode& node);
    static void pop();
    static bool empty();
    static void applySnapshot();
    static void eventHandler(sf::RenderWindow& window, sf::Event event);
};


#endif //SFML_PROJECT_HISTORY_H
