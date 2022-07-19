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
    front   = NULL;
    rear    = NULL;
}

// The method to enqueue the element of the queue
template<class T>
void Queue<T>::Enqueue(T data)
{
    Node<T>* n = new Node<T>;
    Node<T>* last;
    n->data    = data;
    n->next    = NULL;

    if (this->length == 0)
    {
        *head = n;
        front = data;
    }
    else
    {
        last = *head;

        // itterating over the queue to find the last element
        while(last->next != NULL)
        {
            last = last->next;            
        }

        last->next = n;        
    }

    rear  = data;  
    length++;
}

// The method to dequeue the element of the queue
template<class T>
T Queue<T>::Dequeue()
{
    if (length > 0)
    {
        Node<T>* n = *head;
        T item     = n->data;
        *head      = n->next;
        front      = n->next->data; 
        free(n);
        length--;
        return item;
    }
    else
    {
        return NULL;
    }
}

// Method to get the front element of the queue
template<class T>
T Queue<T>::Front()
{
    return front;
}

// Method to get the rear element of the queue
template<class T>
T Queue<T>::Rear()
{
    return rear;
}

// Method to check if the queue is empty
template<class T>
bool Queue<T>::IsEmpty()
{
    return (length == 0);
}

// Method to get the size of the queue
template<class T>
unsigned int Queue<T>::Size()
{
    return length;
}

#endif