#ifndef STACK_HPP
#define STACK_HPP

#include "Node.hpp"
#include <iostream>

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
        void PrintStack();
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
        Node<T>* n  = new Node<T>();
        n->data     = data;

        if (length == 0)
        {
            n->next = NULL;
            *head   = n;
        }
        else
        {
            n->next = *head;
            *head    = n;
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
        delete (*head);
        head = &n;
        
    }
    catch(...)
    {
        return false;
    }
    
}

template<class T>
void Stack<T>::PrintStack(){
    if (length != 0){
        Node<T> *elem = *head;

        while(elem != NULL){
            std::cout << elem->data << "\t";
            elem = elem->next;
        }
    }
}

#endif