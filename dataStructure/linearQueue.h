//
// Created by nameuk on 17. 6. 13.
//

#ifndef DATASTRUCTURE_LINEARQUEUE_H
#define DATASTRUCTURE_LINEARQUEUE_H
class Queue {
private:
    int arr[5]={0,};
    int front;
    int back;
public:
    void print();
    void error();
    void push(int in);
    int pop();
    Queue() {
        front = back = 4;
    }
};
#endif //DATASTRUCTURE_LINEARQUEUE_H
