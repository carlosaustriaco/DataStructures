#include "Queue.hpp"
#include <iostream>

int main()
{
    Queue<int>* q = new Queue<int>;

    q->Enqueue(2);
    q->Enqueue(5);
    q->Enqueue(-120);
    q->Enqueue(45);
    
    std::cout << q->Dequeue() << std::endl;
    std::cout << q->Front() << std::endl;
    std::cout << q->Rear() << std::endl;
    std::cout << q->IsEmpty() << std::endl;

    delete q;

    return 0;
}