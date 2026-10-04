#include "stackLinkedList.h"

Stack *createStack() {
    Stack *ps = (Stack *)malloc(sizeof(Stack));
    if (ps == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    ps->top = NULL;
    return ps;
}

void freeStack(Stack *ps) {
    freeStackElements(ps);
    free(ps);
}

void freeStackElements(Stack *ps) {
    Node *current = ps->top;
    Node *next;
    while (current != NULL) {
        next = current->next;
        free(current->data);
        free(current);
        current = next;
    }
    ps->top = NULL;
}

char *pop(Stack *ps) {
    if (isEmpty(ps)) {
        printf("Tried to pop, but Stack was empty\n");
        return NULL;
    }
    Node *temp = ps->top;
    char *poppedValue = temp->data;
    ps->top = ps->top->next;
    free(temp);
    return poppedValue;
}

void push(Stack *ps, char *str) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = str;
    newNode->next = ps->top;
    ps->top = newNode;
}

char *top(Stack *ps) {
    if (isEmpty(ps)) {
        printf("Tried to peek at the top of the Stack, but it was empty.\n");
        return NULL;
    }
    return ps->top->data;
}

boolean isEmpty(Stack *ps) {
    return ps->top == NULL ? TRUE : FALSE;
}
