//
// Created by tianh on 3/23/2023.
//

#ifndef SFML_PROJECT_WORD_H
#define SFML_PROJECT_WORD_H

#include <iostream>
#include <ostream>
#include <SFML/Graphics.hpp>
#include "Font.h"
class Word: public sf::Text
{
private:
    int priority=0;
public:
    Word();
    int getPriority();
    void setPriority(const int& priority);

//    int size();

    friend bool operator <(const Word& lhs, const Word& rhs);
    friend bool operator >(const Word& lhs, const Word& rhs);
    friend bool operator <=(const Word& lhs, const Word& rhs);
    friend bool operator >=(const Word& lhs, const Word& rhs);
    friend bool operator ==(const Word& lhs, const Word& rhs);
    friend bool operator !=(const Word& lhs, const Word& rhs);
    void operator +=(int add);

    friend std::istream& operator>>( std::istream& in, Word& word);
//    friend bool operator >(const Word& lhs, const Word& rhs);
};


#endif //SFML_PROJECT_WORD_H
