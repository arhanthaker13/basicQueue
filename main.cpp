#include "circularQueue.hpp"

int main() {
    Queue q;

    while (true) {
        char choice;
        std::cout << "Enter your choice (e: enqueue, d: dequeue, s: show, q: quit): ";
        std::cin >> choice;

        if (choice == 'e') {
            q.enqueue();
        } else if (choice == 'd') {
            q.dequeue();
        } else if (choice == 's') {
            q.showQueue();
        } else if (choice == 'q') {
            std::cout << "Exiting program." << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please choose again." << std::endl;
        }
    }

    return 0;

}