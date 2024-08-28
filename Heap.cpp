//
// Created by tianh on 3/21/2023.
//

#ifndef CS8_HEAP_HEAP_CPP
#define CS8_HEAP_HEAP_CPP
#include "Heap.h"

template<typename T>
Heap<T>::Heap() {

}

template<typename T>
int Heap<T>::getParent(int childIndex)
{
    return (childIndex-1)/2;
}

template<typename T>
void Heap<T>::reheapifyUp(int childIndex)
{
    int parent= getParent(childIndex);
    if(tree[childIndex] > tree[parent])
    {
        swap(childIndex, parent);
        reheapifyUp(parent);
    }

}

template<typename T>
void Heap<T>::reheapifyDown(int parentIndex)
{
        int highestChild= getHighestChild(parentIndex);
        if(tree[highestChild] > tree[parentIndex]) {
            swap(highestChild, parentIndex);
            reheapifyDown(highestChild);
        }
}

template<typename T>
void Heap<T>::swap(int childIndex, int parentIndex)
{
    T temp= tree[parentIndex];
    tree[parentIndex]= tree[childIndex];
    tree[childIndex]= temp;
}

template<typename T>
int Heap<T>::getLeftChild(int parent) {
    return 2*parent+1;
}

template<typename T>
int Heap<T>::getRightChild(int parent) {
    return 2*parent+2;
}

template<typename T>
int Heap<T>::getHighestChild(int parent) {

    int left = getLeftChild(parent);
    int right = getRightChild(parent);

    if (left < size() && right < size()){
        if (tree[left] > tree[right]){
            return left;
        }
        else {
            return right;
        }
    }
    else if (left < size() && right >= size()){

        if (tree[left] > tree[parent]){
            return left;
        }
        else
            return parent;
    }
    else if (left >= size() && right < size()){

        if (tree[right] > tree[parent]){
            return right;
        }
        else
            return parent;
    }
    else if (left >= size() && right >= size()){
        return parent;
    }

//    if(tree[getLeftChild(parent)] > tree[getRightChild(parent)])
//    {
//        return getLeftChild(parent);
//    }
//    else if (tree[getLeftChild(parent)] < tree[getRightChild(parent)])
//    {
//        return getRightChild(parent);
//    }
//    return parent;
}

template<typename T>
void Heap<T>::push(const T &item)
{
        tree.push_back(item);
        reheapifyUp(tree.size()-1);

}

template<typename T>
void Heap<T>::pop()
{
    if (tree.empty()){

    }
    else if (tree.size() == 1){
        tree.pop_back();
    }
    else {
        swap(tree.size()-1,0);
        tree.pop_back();
        reheapifyDown(0);
    }
//    int last= size()-1;
//    swap(last, 0);
//    tree.pop_back();
//    reheapifyDown(0);
}

template<typename T>
T &Heap<T>::top()
{
    if(!tree.empty())
    {
        return tree[0];
    }
}

template<typename T>
int Heap<T>::size() {
    return tree.size();
}

template<typename T>
bool Heap<T>::empty() {
    return tree.empty();
}

#endif //CS8_HEAP_HEAP_CPP
