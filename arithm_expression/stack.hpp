#pragma once

class Stack {
    private:
        int* _pData;
        int _max;
        int _top;

        bool isFull();

    public:
        Stack(int size=16);
        ~Stack();

        void push(int value);
        int  pop();
        
        bool isEmpty() const;
};