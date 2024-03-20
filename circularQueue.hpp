#ifndef INCLUDED_CIRCULARQUEUE_HPP
#define INCLUDED_CIRCULARQUEUE_HPP

#include <iostream>
#include <queue>

class Queue {
private:
    struct queueItem {
        std::string payload;
        int dest;
    };
    std::queue<queueItem> q;
    queueItem* head;
    queueItem* tail;
    int count;
    const int MAXSIZE = 6;

public:
    Queue(): head(nullptr), tail(nullptr) {}
    void enqueue();
    void dequeue();
    void showQueue();
    bool validate();
};

#endif
