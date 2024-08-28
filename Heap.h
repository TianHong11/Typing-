//
// Created by tianh on 3/21/2023.
//

#ifndef CS8_HEAP_HEAP_H
#define CS8_HEAP_HEAP_H

#include <vector>
#include <iostream>
template <typename T>
class Heap
{
private:
    std::vector<T> tree;
public:
    Heap();
    int getParent(int childIndex);
    int getLeftChild(int parent);
    int getRightChild( int parent);
    int getHighestChild(int parent);
    void reheapifyUp(int childIndex);
    void reheapifyDown(int parentIndex);
    void swap(int childIndex, int parentIndex);
    void push(const T& item);
    void pop();
    T& top();
    int size();
    bool empty();



};
#include "Heap.cpp"


#endif //CS8_HEAP_HEAP_H
