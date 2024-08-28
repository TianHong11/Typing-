//
// Created by tianh on 3/23/2023.
//

#ifndef SFML_PROJECT_FILEREADER_H
#define SFML_PROJECT_FILEREADER_H

#include <vector>
#include <fstream>
#include <string>
#include <iterator>
#include <iostream>
template<typename T>
class FileReader : public std::iterator<std::random_access_iterator_tag, T>
{
private:
    void getData(const std::string& filename);
    std::vector<T> data;
public:
    typedef typename std::vector<T>::iterator iterator;
    FileReader();
    FileReader(const std::string& filename);
    iterator begin();
    iterator end();


};
#include "FileReader.cpp"
#endif //SFML_PROJECT_FILEREADER_H
