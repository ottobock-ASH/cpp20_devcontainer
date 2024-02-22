#include "stack.hpp"
#include <iostream>

using namespace std;

Stack::Stack(const Stack& s) {
    cout << "Copy Constructor" << endl;
}

Stack::~Stack() {
    cout << "Destructor" << endl;
}

Stack& Stack::operator=(const Stack& s) {
    cout << "Assignment operator" << endl;
    return *this;
}

void Stack::push(int value) {
    _values[++_sp] = value;
}

int Stack::pop() {
    return _values[_sp--];
}
    
    
bool Stack::isEmpty() const {
    return (_sp <= -1);
}