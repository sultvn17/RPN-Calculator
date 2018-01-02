#include "stack.h"
#include <iostream>

/**
* Constructor
*/
Node::Node(int d) {
    data = d;
    next = NULL;
    prev = NULL;
}

/**
* Destructor
*/
Node::~Node() {
}

/**
* Constructor
*/
Stack::Stack() {
    // TODO: Initialize all private variables
    head = NULL;
    tail = head;
    n_elem =0;
}

/**
* Destructor
*/
Stack::~Stack() {
    // TODO: Needs to remove ALL elements from the queue
}

/**
* The enqueue function receives an integer,
* and inserts it onto the queue
*/
void Stack::push(int val) {
    // TODO
    if(n_elem ==0){
        Node *temp = new Node(val);
        head = temp;
        tail = head;
        n_elem++;
    }
    else{
    Node *temp = new Node(val);
    temp->next = head;
    head->prev = temp;
    head = temp;
    n_elem++;
    }

}

/**
* The dequeue funtion removes the next value from the queue
* and returns it
*/
int Stack::pop() {
    // TODO
    if(n_elem ==0){
        
    }
    else{
        Node *temp = head;
        int pop = head->data;
        head = head->next;
        delete temp;
        n_elem--;
        return pop;
    }
}


/**
* The isEmpty function returns whether or not the queue is empty
*/
void Stack::printStack() {
    // TODO
    Node *temp = tail;
    for(int i =0; i<n_elem; i++){
        std::cout<<temp->data<<" ";
        temp = temp->prev;
    }
}