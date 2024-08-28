//
// Created by tianh on 3/23/2023.
//

#include "WordSort.h"

WordSort::WordSort() {

//    words.enableStates(Hidden); get mroe information about this and why it does not work. Forgot part of this

}

WordSort::WordSort(const std::string& fileName,  TextInput& ti)
:fileReader(fileName)
{
    priority(ti.getString());
}

std::string WordSort::tolowers(const std::string& text)
{
    std::string t;
    for (char i : text) {
        t += tolower(i);
    }

    //t[0] = toupper(t[0]); // might not always work
    // but when comparing the word to the dictionary list make everything lower

    return t;
}

char WordSort::tolowersLetter(char &letter)
{
    return tolower(letter);
}
//std::string WordSort::tolower(const Word &word) {
//
//}

int WordSort::getCharCount(const std::string &, const std::string text) {
    return 0;
}

void WordSort::heuristic(Word &word,  const std::string &text)
{
    if(tolowers(text) == tolowers(word.getString()))
    {
        word.setPriority(100);
    }
//
//    int k=0, q=0;
//    while(tolower(text[k]) == tolower(word.getString()[q]))
//    {
//        word.setPriority(10);
//
//        k++;
//        q++;
//        if(tolower(text[k]) == tolower(word.getString()[q]))
//        {
//            word.setPriority(30);
//        }
//    }

    if(tolower(text[0])== tolower(word.getString()[0])) //somehow make word lower case
    {
        word.setPriority(15);
    }
    if(text.size()>1)
    {
        for(int i=1; i<text.size();i++) {
//            if (tolower(text[i]) == tolower(word.getString()[i]) ){
//                word+=10;
//            }
//            else
//            {
                for(int j=1; j<text.size();j++)
                {
                    if(tolower(text[i]) == tolower(word.getString()[j]))
                    {
                        word+=10;
                    }
                }

        }
    }

}

const sf::Vector2f &WordSort::getPosition() const {
    return words[0].getPosition();
}

void WordSort::setPosition(const sf::Vector2f &initialPosition)
{
    words[0].setPosition(initialPosition);
    for(int i=1; i<words.size();i++)
    {
        Position::boxBelow(words[i-1],words[i],10);
    }

}
//
//sf::FloatRect WordSort::getGlobalBounds() {
//    return words[0].getGlobalBounds();
//}

sf::FloatRect WordSort::getGlobalBounds() const {
    return words[0].getGlobalBounds();
}

void WordSort::priority(const std::string& text)
{
    if(text.length()==0)
    {
        enableStates(Hidden);
    }
    else
    {
        disableStates(Hidden);
    }
    Heap<Word> heap;

    //    for (Word &w : fileReader) {
//        // : colon makes a iterator in the background and uses begin and end
//    }

    for(auto iter = fileReader.begin(); iter!= fileReader.end(); iter++)
    {
        Word w = *iter;
        heuristic(w,text);
        heap.push(w);
    }

    words.clear();
    while(!heap.empty())
    {
        Word w= heap.top();
        words.push_back(w);
        std::string f= words.back().getString();
//        std::cout<< f <<std::endl;
        heap.pop();
    }


//    heap.top().setPostiotion(initilialPosition));
//    Word w=heap.top;
//    words.clear();
//    while(text.size()> )
}


void WordSort::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    if(!checkState(Hidden))
    {
        for(int i=0; i<words.size();i++)
        {
            window.draw(words[i]);
        }
    }

}
