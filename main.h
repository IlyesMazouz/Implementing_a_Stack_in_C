#ifndef MAIN_H
#define MAIN_H

#include <stdio.h> 

#define MAX_STACK_SIZE 500

// defining a structure called Stack to represent the stack
typedef struct {
    int stack_data[MAX_STACK_SIZE];
    int first_data;
} Stack;

void initializeStack(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int isEmpty(Stack *s);

#endif
