#pragma once

class Stack {
    private:
        int _values[32];
        int _sp;

    public:
        Stack(const Stack& s);
        Stack(int size=32);
        ~Stack();
        
        Stack& operator=(const Stack& s);
        void push(int value);
        int  pop();

        bool isEmpty() const;
};