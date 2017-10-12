#ifndef STACK_H
#define STACK_H

template <class T>
class Stack
{
private:
    T* stack;
    int maxSize;
    int size;
public:
    Stack(int size);
    ~Stack();
    Stack(const Stack& stack);
    void push(T item);
    T pop();
};

#endif