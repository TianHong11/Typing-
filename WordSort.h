//
// Created by tianh on 3/23/2023.
//

#ifndef SFML_PROJECT_WORDSORT_H
#define SFML_PROJECT_WORDSORT_H

#include <iostream>
#include "Word.h"
#include "FileReader.h"
#include "Heap.h"
#include <SFML/Graphics.hpp>
#include "DropDownMenu/Position.h"
#include "TextInput.h"


class WordSort: public sf::Drawable, public States
{
private:
    FileReader<Word> fileReader;
    std::vector<Word> words; //all sorted

    sf::Vector2f initialPosition;
    std::string tolowers (const std::string& text);
    char tolowersLetter (char& letter);

//        std::string tolower(const Word& word);
    int getCharCount(const std::string&, const std::string text);
//    void heuristic(Word& word, const std::string& text);
    void heuristic(Word& word, const std::string& text);


public:
    WordSort();
    WordSort();
    void priority(const std::string& text);

//    sf::FloatRect getGlobalBounds();
    sf::FloatRect getGlobalBounds() const;
    const sf::Vector2f &getPosition() const;
    void setPosition(const sf::Vector2f &initialPosition);

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

};


#endif //SFML_PROJECT_WORDSORT_H
