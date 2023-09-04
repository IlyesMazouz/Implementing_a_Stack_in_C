#include "main.h"

// adds an element to the top of the stack

int pop(Stack *s) 
{
    if (isEmpty(s))
    {
        printf("Stack is empty, impossible to pop\n");
        return -1; 
    }
    
    int topElement = s->stack_data[s->first_data];
    --(s->first_data); 
    return topElement;
}
