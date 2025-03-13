#include <iostream>
#include "stack.h"

bool Stack::isEmpty() {
    return top == -1;
}

void Stack::push(int value) {
    if (top == MAX_SIZE - 1) {
        std::cout << "Stack is full" << std::endl;
    }
    else{
        top++;
        arr[top] = value;
    }
}

int Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    }
    else {
        int temp = arr[top];
        top--;
        return temp;
    }
}