//
// Created by tianh on 3/19/2023.
//

#include "Font.h"

std::map<FontEnum, sf::Font> Font::map;
sf::Font Font::font;

sf::Font &Font::getFont(FontEnum fontEnum)
{
    loadFont(fontEnum);
    return map[fontEnum];
}
void Font::loadFont(FontEnum fontEnum)
{
    map[fontEnum].loadFromFile(getFontEnumToString(fontEnum));
}

std::string Font::getFontEnumToString(FontEnum fontEnum)
{
    switch (fontEnum)
    {
        case OpenSans:
            return "Font/OpenSans-Bold.ttf";

        case TimesRoman:
            return "Font/Times New Roman.ttf";

        case LastEnum: return " ";
    }
}

 sf::Font& Font::getCursorFont()
{
    font.loadFromFile("Font/OpenSans-Bold.ttf");
    return font;
}

const sf::Glyph &Font::getGlyph(char ch, int size)
{
    return font.getGlyph(ch, size, false);
}
