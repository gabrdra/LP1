#ifndef MYQUEUE
#define MYQUEUE
#include <iostream>
template <class Q>
class myqueue
{
private:
    int size;
    int top;
    Q* queue;
public:
    myqueue(int size)
    {
        this->size = size;
        this->top = -1;
        this->queue = new Q[size];
        
    }
    int sizeOf()
    {
        return this->size;
    }
    Q front()
    {
        return this->queue[0];
    }
    Q back()
    {
        return this->queue[this->top];
    }
    void push(Q element)
    {
        if(this->top == this->size-1)
        {
            std::cout << "Queue is full" << std::endl;
        } 
        else
        {
            this->top++;
            this->queue[this->top] = element;
        }
    }
    void pop()
    {
        if (top > 0)
        {
            top--;
            this->queue[this->top];
        }
        else
        {
            std::cout << "Queue is empty" << std::endl;
        }
        
    }
    bool isEmpty()
    {
    if (top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    }
    ~myqueue()
    {
        free(this->queue);
    }
};
#endif