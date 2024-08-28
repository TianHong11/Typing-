//
// Created by tianh on 3/19/2023.
//

#ifndef SFML_PROJECT_FONT_H
#define SFML_PROJECT_FONT_H

#include <SFML/Graphics.hpp>
#include "FontEnum.h"
#include <map>
class Font
{
private:
    static std::map<FontEnum, sf::Font> map;
    static sf::Font font;

    static void loadFont(FontEnum fontEnum);
    static std::string getFontEnumToString(FontEnum fontEnum);


public:
    static sf::Font& getFont(FontEnum fontEnum);

    static sf::Font& getCursorFont();
    static const sf::Glyph &getGlyph(char ch, int size);
};



#endif //SFML_PROJECT_FONT_H
