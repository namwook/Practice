//
// Created by nameuk on 17. 6. 13.
//

#ifndef DATASTRUCTURE_CIRCULARQUEUE_H
#define DATASTRUCTURE_CIRCULARQUEUE_H

class circularQueue {
private:
    int front;
    int back;
    int arr[5]={0,};
public:
    circularQueue(){
        front = back = 0;
    }
    void push(int input);
    void pop();
    void error();
};

#endif //DATASTRUCTURE_CIRCULARQUEUE_H
