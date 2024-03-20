#include "circularQueue.hpp"

bool validate() {
    return 0;
}

void Queue::enqueue() {
    if (q.size() > MAXSIZE - 1) {
        std::cout << "OVERFLOW" << std::endl;
    } else {
        queueItem item;
        int dest;
        std::cout << "Enter payload (up to 6 characters): ";
        std::cin >> item.payload;
        std::cout << "Enter destination(1 - 6)";
        std::cin >> dest;
        q.push(item);
    }
}

void Queue::dequeue() {
    if (q.empty()) {
        std::cout << "UNDERFLOW" << std::endl;
    } else {
        std::string dequeuedPayload = q.front().payload;
        std::cout << "Dequeued: " << dequeuedPayload << std::endl;
        q.pop();
    }
}

void Queue::showQueue() {
    if (q.empty()) {
        std::cout << "Queue is empty" << std::endl;
        return;
    }

    std::queue<queueItem> tempQueue = q;

    while (!tempQueue.empty()) {
        queueItem item = tempQueue.front();
        std::cout << item.payload << std::endl;
        tempQueue.pop();
    }
}