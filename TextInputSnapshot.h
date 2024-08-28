//
// Created by tianh on 3/18/2023.
//

#ifndef SFML_PROJECT_TEXTINPUTSNAPSHOT_H
#define SFML_PROJECT_TEXTINPUTSNAPSHOT_H

#include "Snapshot.h"
#include <SFML/Graphics.hpp>

class TextInputSnapshot : public Snapshot
{
private:

    std::string text;

//    sf::Color color;

//    Snapshot *getSnapshot() override;
//
//    void applySnapshot(const Snapshot *snapshot);
public:
//    const sf::Color &getColor() const;
//
//    void setColor(const sf::Color &color);

    const std::string &getText() const;

    void setText(const std::string &text);

};


#endif //SFML_PROJECT_TEXTINPUTSNAPSHOT_H
