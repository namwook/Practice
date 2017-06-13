//
// Created by nameuk on 17. 6. 13.
//
#include <iostream>
using namespace std;
#include "circularQueue.h"
#include "linearQueue.h"

int main() {
    Queue q = Queue();
    circularQueue cQ = circularQueue();
    q.push(1);
    q.push(1);
    q.push(1);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
    return 0;
}
