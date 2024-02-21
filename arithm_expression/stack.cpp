#include "stack.hpp"

bool Stack::isFull() {
    return (_top >= _max -1);
}

Stack::Stack(int size) {
    _pData = new int [size];
    _max = size;
    _top = -1;
}

Stack::~Stack() {
    if(_pData != nullptr) {
        delete[] _pData;
    }
}


void Stack::push(int value) {
    _pData[++_top] = value;
}

int Stack::pop() {
    return _pData[_top--];
}
    
    
bool Stack::isEmpty() const {
    return 1;
}