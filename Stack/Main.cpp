#include <bits/stdc++.h>
#include "Stack.hpp"

using namespace std;

int main(){
    Stack<int> stack;

    stack.Push(1);
    stack.Push(5);
    stack.Push(8);
    stack.Push(12122);
    stack.Push(2);
    stack.Pop();

    stack.PrintStack();

    return 0;
}