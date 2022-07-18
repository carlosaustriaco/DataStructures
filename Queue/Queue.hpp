#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "Node.hpp"
#include <iostream>

template<class T>
class Queue{
    private:
        Node<T>** head;
        unsigned int length;
        T front;
        T rear;

    public:
        Queue();

        void Enqueue(T data);
        T Dequeue();
        T Front();
        T Rear();
        bool IsEmpty();
        unsigned int Size();
};

// The constructor of the queue data structure
template<class T>
Queue<T>::Queue()
{
    length  = 0;
    head    = new Node<T>*;
}

template<class T>
void Queue<T>::Enqueue(T data)
{
    Node<T>* n = new Node<T>;
    n->data    = data;

    if (length == 0)
    {
        n->next = NULL;
    }
    else{
        n->next = *head;
    }

    *head = n;
    length++;
}



#endif