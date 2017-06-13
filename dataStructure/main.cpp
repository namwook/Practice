#include <iostream>
using namespace std;

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
void Queue::error(){
    if(back == -1 && front != -1) printf("queue is fulled..\n");
    else if(back == front){
        printf("queue is empty..\n");
        front = back = 4;
    }
}
void Queue::print() {
    for (int i = 0; i < 5; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\nfront : %d, back : %d\n",front, back);
}
void Queue::push(int in) {
    if(back == -1) error();
    else{
        arr[back] = in;
        back--;
    }
    print();
}
int Queue::pop() {
    if(front == back) error();
    else{
        printf("pop : %d\n",arr[front]);
        arr[front]=0;
        front--;
    }
    print();
}

int main() {
    Queue q = Queue();
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
    q.push(1);
    return 0;
}
