//------------------------------------------------------------------------------
// template_queue.cpp
// 
// Demos template class that implements a queue
// 
// During compilation, templates are replaced by functions that take
// parameters of types actually passed in.
//------------------------------------------------------------------------------
#include "TQueue.h"

#include <iostream>

//------------------------------------------------------------------------------
// using symbols
//------------------------------------------------------------------------------
using std::cout;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    // int queue
    TQueue<int> iq;

    iq.enqueue(5);
    int i;

    if (iq.dequeue(i)) {
        cout << i << '\n';
    };

    // char queue
    TQueue<char> cq;

    cq.enqueue('g');
    char c;

    if (cq.dequeue(c)) {
        cout << c << '\n';
    };

    return 0;
}