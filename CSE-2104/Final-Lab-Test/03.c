#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure to represent the stack
struct Stack {
    int arr[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return (stack->top == -1);
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Function to push an element onto the stack
void push(struct Stack *stack, int data) {
    if (isFull(stack)) {
        printf("Stack Overflow: Cannot push element onto the stack.\n");
        return;
    }
    stack->top++;
    stack->arr[stack->top] = data;
    printf("Pushed %d onto the stack.\n", data);
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow: Cannot pop element from an empty stack.\n");
        return -1; // Return an arbitrary value to indicate failure
    }
    int data = stack->arr[stack->top];
    stack->top--;
    return data;
}

// Function to display the stack
void display(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements:\n");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d\n", stack->arr[i]);
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    // Push elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);

    // Display stack elements
    display(&stack);

    // Pop element from the stack
    int poppedElement = pop(&stack);
    if (poppedElement != -1) {
        printf("Popped element: %d\n", poppedElement);
    }

    // Display stack elements after popping
    display(&stack);

    return 0;
}
