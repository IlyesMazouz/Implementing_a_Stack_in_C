#include "main.h"

// adding elemnts into the stack

void push(Stack *s, int value) {
    if (s->first_data == MAX_STACK_SIZE - 1)
    {
        printf("stack is full, impossible to push %d\n", value);
        return;
    }
    s->stack_data[++(s->first_data)] = value;
}