#include "stack.h"
#include <iostream>

using namespace std;

int main(){
    Stack* s = new Stack;
    bool stack_is_empty = s->isEmpty();

    if (stack_is_empty) {
        cout << "Stack created empty" << endl;
    }
    s->pop();
    s->push(1);
    int stack_has_items = s->isEmpty();
    if (stack_has_items == 0){
        cout << "A value was pushed: ";
        cout << s->pop() << endl;
        if (s->isEmpty()){
            cout << "Stack empty again" << endl;
        }
    }
    for (int i=0; i<101; i++) {
        s->push(i);
    }
}