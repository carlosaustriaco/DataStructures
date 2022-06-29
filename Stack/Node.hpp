#ifndef NODE_HPP
#define NODE_HPP

template<class T>
class Node{
    public:
        T data;
        Node<T>* next;
};

#endif