#include <stdio.h>

#define MAX_SIZE 100
int stack[ MAX_SIZE ], top = -1;

void push(int data){
    if( top + 1 == MAX_SIZE ) printf("Stack is full.");

    top++;
    stack[ top ] = data;
}

int pop(){
    if( top < 0 ) printf("Stack is empty.");

    int data = stack[top];
    top --;

    return data;
}

void display()
{
    int i;
    printf("All data in the stack now:");
    for(i=0; i <= top; ++i) printf(" %d", stack[i] );
}

int main(void)
{
    push(2);
    push(3);
    push(4);

    int x = pop();
    printf("Popped value: %d\n", x);

    push(5);

    display();

    return 0;
}
