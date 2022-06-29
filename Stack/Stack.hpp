#ifndef STACK_HPP
#define STACK_HPP

#include "Node.hpp"

template<class T>
class Stack
{
    private:
        Node<T>** head;
        unsigned int length;
    public:
        Stack();

        bool Push(T data);
        bool Pop();
};

// The constructor initializing the head variable
template<class T>
Stack<T>::Stack()
{
    head    = new Node<T>*;
    length  = 0;
}

// Push an element into the stack
template<class T>
bool Stack<T>::Push(T data){
    try
    {
        Node<T>* n = new Node<T>;
        n->data = data;
        
        if (length == 0)
        {
            *head = n;
            n->next = NULL;
        }
        else
        {
            n->next = *head;
            head    = &n;
        }

        length++;
        return true;
    }
    catch(...)
    {
        return false;
    }    
}

template<class T>
bool Stack<T>::Pop()
{
    try
    {
        Node<T>* n = (*head)->next;
        (*head).Free;
    }
    catch(...)
    {
        std::cerr << e.what() << '\n';
    }
    
}

#endif