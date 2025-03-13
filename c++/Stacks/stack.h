#ifndef STACK_H
#define STACK_H

// Class definition for a stack
class Stack {
    public:
    // Precondition: none
    // Postcondition: creates a stack with a top index of -1
    bool isEmpty();

    // Precondition: none
    // Postcondition: raises the top index by 1.
    void push(int value);

    int pop();
    
    private:
    // static used for constant variables across all instances of the class
    // it creates a single copy of the variable that is shared by all instances
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int top = -1;
    
};

#endif // STACK_H