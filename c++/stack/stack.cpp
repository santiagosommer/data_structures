#include <iostream>
#include "stack.h"

using namespace std;

bool Stack::isEmpty() {
    return top == -1;
}

void Stack::push(int value) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack overflow" << endl;
    }
    else{
        top++;
        arr[top] = value;
    }
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack underflow" << endl;
        return -1;
    }
    else {
        int temp = arr[top];
        top--;
        return temp;
    }
}