#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP
#include "Node.hpp"
#include <iostream>
#include <cstddef>

template<class T>
class List{
    private:
        Node<T>** head;
        unsigned int length;
    public:
        List();

        unsigned int size();
        bool push_front(T data);
        bool append(T data);
        void print_list();
};

// The constructor initializing the head variable
template <class T>
List<T>::List(){
        
    head    = new Node<T>*;
    length  = 0;
}

// The method to insert an element at the beginning of the list
// Returns true if the insertion was a success and false otherwise
template <class T>
bool List<T>::push_front(T data){
    try{  
        
        Node<T>* n = new Node<T>;
        
        
        n->data = data;
        n->next = *head;
        head   = &n;
        length++;
        
        return true;
    }
    catch(...)
    {
        return false;
    }
}

// The method to insert an element at the end of the list
// Returns true if the insertion was a success and false otherwise
template <class T>
bool List<T>::append(T data){
    try
    {       
        Node<T>* newNode = new Node<T>();    
        Node<T>* last;

        // setting the new node
        newNode->data = data;
        newNode->next = NULL;

        if(length == 0){
            *head = newNode;
        }
        else{
            last = *head;
            // itterating over the list until find the end
            while(last->next != NULL){
                last = last->next;
                
            }

            last->next = newNode;
        }

        length++;
        return true;
    }
    catch(...)
    {
        std::cout << "Exception\n";
        return false;
    }
}

// The method gets the size of the linked list
template <class T>
unsigned int List<T>::size(){
    return length;
}

// The method to print the linked list in the screen
template <class T>
void List<T>::print_list(){
    if(length != 0){
        Node<T> *elem = *head;

        while(elem != NULL){
            std::cout << elem->data << "\t";
            elem = elem->next;
        }
    }
}

#endif