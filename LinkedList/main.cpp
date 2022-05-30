#include <bits/stdc++.h>
#include "LinkedList.hpp"

int main(){
     List<int> l;

    l.append(1);
    l.append(5);
    l.append(8);
    l.push_front(-5);

    l.print_list();

    return 0;
}