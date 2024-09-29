//
// Created by ahmed on 9/28/2024.
#include "functions.h"
#include <iostream>

using namespace std;

void displayMenu() {
    cout << "Data Structure Operations Menu:" << endl;
    cout << endl;

    cout << "-- Stack Operations --" << endl;
    cout << "1. Push (Add element to stack)" << endl;
    cout << "2. Pop (Remove element from stack)" << endl;
    cout << "3. Peek (Top element of stack)" << endl;
    cout << "4. Check if Stack is Empty" << endl;
    cout << "5. Print Stack" << endl;
    cout << "6. Get Stack Size" << endl;
    cout << endl;

    cout << "-- Queue Operations --" << endl;
    cout << "7. Enqueue (Add element to queue)" << endl;
    cout << "8. Dequeue (Remove element from queue)" << endl;
    cout << "9. Check if Queue is Empty" << endl;
    cout << "10. Print Queue" << endl;
    cout << "11. Get Queue Size" << endl;
    cout << endl;

    cout << "12. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    Stack stack;
    Queue queue;

    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;
                cout << "Enter element to push: ";
                cin >> data;
                stack.push(data);
                break;
            }
            case 2: {
                cout << "Popped: " << stack.pop() << endl;
                break;
            }
            case 3: {
                cout << "Top element: " << stack.peek() << endl;
                break;
            }
            case 4: {
                cout << "Stack is " << (stack.isEmpty() ? "Empty" : "Not Empty") << endl;
                break;
            }
            case 5: {
                cout << "Stack: ";
                stack.printStack();
                break;
            }
            case 6: {
                cout << "Stack size: " << stack.size() << endl;
                break;
            }
            case 7: {
                int data;
                cout << "Enter element to enqueue: ";
                cin >> data;
                queue.enqueue(data);
                break;
            }
            case 8: {
                cout << "Dequeued: " << queue.dequeue() << endl;
                break;
            }
            case 9: {
                cout << "Queue is " << (queue.isEmpty() ? "Empty" : "Not Empty") << endl;
                break;
            }
            case 10: {
                cout << "Queue: ";
                queue.printQueue();
                break;
            }
            case 11: {
                cout << "Queue size: " << queue.size() << endl;
                break;
            }
            case 12: {
                cout << "Exiting..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please choose again." << endl;
            }
        }
    } while (choice != 12);

    return 0;
}