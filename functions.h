//
// Created by ahmed on 9/28/2024.
//

#ifndef INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23023_FUNCTIONS_H
#define INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23023_FUNCTIONS_H

#include <iostream>
using namespace std;
//NODE CLASS
class Node {
public:
    int data;
    Node* next;

    Node(int dataValue);
    ~Node();

    void setNext(Node* nextNode);
    Node* getNext();
    void setData(int dataValue);
    int getData();
};


//STACK CLASS



class Stack {
private:
    Node* top;
    int count;

public:
    Stack();
    ~Stack();

    bool isEmpty();
    void push(int data);
    int pop();
    int peek();
    int size();
    void clear();
    void printStack();
};

//QUEUE CLASS



class Queue {
private:
    Node* front;
    Node* rear;
    int count;

public:
    Queue();
    ~Queue();

    bool isEmpty();
    void enqueue(int data);
    int dequeue();
    int peek();
    int size();
    void printQueue();
};

#endif //INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23023_FUNCTIONS_H
