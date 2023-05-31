#ifndef istack_h
#define istack_h

#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} Node;

typedef struct stack
{
    Node* top;
    int size;
} Stack;

Stack* s_create()
{
    Stack* new_stack = (Stack*)malloc(sizeof(Stack));
    new_stack->top = NULL;
    new_stack->size = 0;
    return new_stack;
}

int s_push(Stack* s, int n)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = n;
    new_node->next = s->top;
    s->top = new_node;
    s->size++;
    return new_node->data;
}

int s_pop(Stack* s)
{
    if (s->top == NULL)
        return -1; // La pila está vacía

    int popped_data = s->top->data;
    Node* temp = s->top;
    s->top = s->top->next;
    free(temp);
    s->size--;
    return popped_data;
}

int s_top(Stack s)
{
    if (s.top == NULL)
        return -1; // La pila está vacía

    return s.top->data;
}

int s_empty(Stack s)
{
    return (s.top == NULL) ? 1 : 0;
}

int s_length(Stack s)
{
    return s.size;
}

#endif /* istack_h */
