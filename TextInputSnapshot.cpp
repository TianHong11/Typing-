//
// Created by tianh on 3/18/2023.
//

#include "TextInputSnapshot.h"

//Snapshot *TextInputSnapshot::getSnapshot() {
//    return nullptr;
//}
//
//void TextInputSnapshot::applySnapshot(const Snapshot *snapshot) {
//
//}

const std::string &TextInputSnapshot::getText() const {
    return text;
}

void TextInputSnapshot::setText(const std::string &text) {
    TextInputSnapshot::text = text;
}

//const sf::Color &TextInputSnapshot::getColor() const {
//}
//
//void TextInputSnapshot::setColor(const sf::Color &color) {
//
//}
