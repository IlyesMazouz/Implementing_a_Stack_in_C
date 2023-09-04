#include "main.h"

// checks if the stack is empty. Return 1 if empty, 0 otherwise

int isEmpty(Stack *s)
{
    return s->first_data == -1;
}
