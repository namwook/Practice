//
// Created by nameuk on 17. 6. 13.
//

#include "circularQueue.h"
#include <iostream>

using namespace std;

void circularQueue::push(int input) {
    if (front != back) {
        back = (back + 1) % 5;
        arr[back] = input;
    } else {
        error();
    }
}

void circularQueue::pop() {
    if (front != back) {
        arr[front] = 0;
        front = (front + 1) % 5;
    } else {
        error();
    }
}

void circularQueue::error() {
    if (arr[front] != 0) {
        printf("queue is fulled..\n");
    } else printf("queue is empty..\n");
}
