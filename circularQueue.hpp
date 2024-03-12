#ifndef INCLUDED_CIRCULARQUEUE_HPP
#define INCLUDED_CIRCULARQUEUE_HPP

#include <iostream>

struct tempName {
    char payload[6];
    int dest;
};

class Queue {
private:
    int head;
    int tail ;

public:
    Queue() : head(-1), tail(-1) {}
    void validate();
    void enqueue();
    void dequeue();
    void showQueue();
};
#endif
