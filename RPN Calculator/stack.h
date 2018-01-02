#ifndef __STACK_H__
#define __STACK_H__

#ifndef NULL
#define NULL 0x00
#endif

class Node {
    private:
        Node *next;
        Node *prev;
        int data;

    public:
        Node(int d);
        ~Node();

    friend class Stack;
};

class Stack {
    private:
        Node *head;
        Node *tail;
        int n_elem;

    public:
        Stack();                //Constructor
        ~Stack();               //Destructor

        void push(int val);      // Inserts val into the queue
        int pop();              // Removes next element from the queue
        void printStack();       // prints the stack values
};

#endif