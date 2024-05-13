#include <stdio.h>

#define MAX_SIZE 10
int queue[MAX_SIZE];
int front=0, rear=0, len = 0;

int is_empty(){
    return len == 0;
}
int is_full(){
    return len == MAX_SIZE;
}

void enqueue(int data) // also push or push_back
{
    if( is_full() ){
        printf("The queue is full.\n");
    }
    else{
        queue[rear] = data;
        rear = (rear + 1) % MAX_SIZE; // when rear + 1 == MAX_SIZE, rear becomes 0. To avoid array index overflow and make it circular
        len ++ ; // no. of elements increased by 1
    }
}
int dequeue()
{
    if( is_empty() ){
        printf("The queue is empty.\n");
        return -1;
    }
    int data = queue[front];
    front = (front + 1 ) % MAX_SIZE;
    len -- ; // no. of elements decreased by 1

    return data;
}

int get_front(){
    if( !is_empty() ){
        return queue[front];
    }
    return -1;
}
int get_rear(){
    if( !is_empty() ){
        // think circularly
        int x = rear-1;
        if( x < 0 ) x = MAX_SIZE - 1;

        return queue[x];
    }
    return -1;
}

void display()
{
    int i = front;
    while( i != rear ){
        printf("%d ", queue[i] );
        i = (i+1) % MAX_SIZE;
    }
    printf("\n");
}


int main(void)
{
    enqueue(2);
    enqueue(3);
    enqueue(5);
    display();

    printf("Dequeued: %d\n", dequeue() );
    display();

    return 0;
}
