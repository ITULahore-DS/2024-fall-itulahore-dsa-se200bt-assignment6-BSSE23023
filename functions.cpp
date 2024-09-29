//
// Created by ahmed on 9/28/2024.
//
#include "functions.h"
//NODE OPERATIONS
Node::Node(int dataValue){
    this->data=dataValue;
    this->next= nullptr;
}

Node::~Node() {

}

void Node::setNext(Node* nextNode) {
    next = nextNode;
}

Node* Node::getNext() {
    return next;
}

void Node::setData(int dataValue) {
    data = dataValue;
}

int Node::getData() {
    return data;
}




//STACK OPERATIONS

Stack::Stack() {
    this->top= nullptr;
    this->count=0;
}

Stack::~Stack() {
    clear();
}

bool Stack::isEmpty() {
    return top == nullptr;
}

void Stack::push(int data) {
    Node* newNode = new Node(data);
    newNode->setNext(top);
    top = newNode;
    count++;
}

int Stack::pop() {
    if (isEmpty()) {
        return -1;
    }
    int data = top->getData();
    Node* temp = top;
    top = top->getNext();
    delete temp;
    count--;
    return data;
}

int Stack::peek() {
    if (isEmpty()) {
        return -1;
    }
    return top->getData();
}

int Stack::size() {
    return count;
}

void Stack::clear() {
    while (top != nullptr) {
        Node* temp = top;
        top = top->getNext();
        delete temp;
    }
    count = 0;
}

void Stack::printStack() {
    Node* temp = top;
    while (temp != nullptr) {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout <<endl;
}


//QUEUE OPERATIONS
Queue::Queue()  {
    this->front= nullptr;
    this->rear= nullptr;
    this->count=0;
}

Queue::~Queue() {
    while (front != nullptr) {
        Node* temp = front;
        front = front->getNext();
        delete temp;
    }
}

bool Queue::isEmpty() {
    return front == nullptr;
}

void Queue::enqueue(int data) {
    Node* newNode = new Node(data);
    if (rear == nullptr) {
        front = rear = newNode;
    } else {
        rear->setNext(newNode);
        rear = newNode;
    }
    count++;
}

int Queue::dequeue() {
    if (isEmpty()) {
        return -1;
    }
    int data = front->getData();
    Node* temp = front;
    front = front->getNext();
    if (front == nullptr) {
        rear = nullptr;
    }
    delete temp;
    count--;
    return data;
}

int Queue::size() {
    return count;
}
int Queue::peek() {
    if (isEmpty()) {
        return -1;
    }
    return front->getData();
}

void Queue::printQueue() {
    Node* temp = front;
    while (temp != nullptr) {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
}


