// Implement the SinglyQueue here
#include <iostream>
#include "linkedlist.h"
#include "queue.h"
using namespace std;

class SinglyQueue : public Queue {
    LinkedList* list = new LinkedList();

public:
    void enqueue(string num) {
        list->addTail(num);
    }

    string dequeue() {
        if (list->_size() == 0) 
            return "(none)";
        return list->removeHead();
    }

    string first() {
        if (list->_size() == 0) 
            return "(none)";
        return list->getHead();
    }

    int size() {
        return list->_size();
    }

    bool isEmpty() {
        return list->_size() == 0;
    }

    void print() {
        list->print();
    }
};
