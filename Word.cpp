//
// Created by tianh on 3/23/2023.
//

#include "Word.h"

Word::Word() {
    setFont(Font::getFont(OpenSans));
    setCharacterSize(24);
    getPriority();
}

int Word::getPriority() {
    return priority;
}

void Word::setPriority(const int& priority)
{
    this->priority+=priority;
//    this->priority=priority;
}

bool operator<(const Word &lhs, const Word &rhs) {
    return lhs.priority!= rhs.priority;
}

bool operator>(const Word &lhs, const Word &rhs) {
    return lhs.priority> rhs.priority;;
}

bool operator<=(const Word &lhs, const Word &rhs) {
    return lhs.priority<= rhs.priority;;
}

bool operator>=(const Word &lhs, const Word &rhs) {
    return lhs.priority>= rhs.priority;;
}

bool operator==(const Word &lhs, const Word &rhs) {
    return lhs.priority== rhs.priority;;
}

bool operator!=(const Word &lhs, const Word &rhs) {
    return lhs.priority!= rhs.priority;

}

void Word::operator+=(int add)
{
    priority+= add;
}

std::istream& operator>>( std::istream &in, Word& word)
{
    std::string text;
    in >>text;
    word.setString(text);
    return in;
}
