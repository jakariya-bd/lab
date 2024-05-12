#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure to represent the queue
struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

// Function to initialize the queue
void initialize(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the queue is full
int isFull(struct Queue *queue) {
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Function to enqueue an element into the queue
void enqueue(struct Queue *queue, int data) {
    if (isFull(queue)) {
        printf("Queue Overflow: Cannot enqueue element into the queue.\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }
    queue->arr[queue->rear] = data;
    printf("Enqueued %d into the queue.\n", data);
}

// Function to dequeue an element from the queue
int dequeue(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue Underflow: Cannot dequeue element from an empty queue.\n");
        return -1; // Return an arbitrary value to indicate failure
    }
    int data = queue->arr[queue->front];
    if (queue->front == queue->rear) {
        // If there was only one element in the queue
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    return data;
}

// Function to display the queue
void display(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements:\n");
    int i = queue->front;
    do {
        printf("%d\n", queue->arr[i]);
        i = (i + 1) % MAX_SIZE;
    } while (i != (queue->rear + 1) % MAX_SIZE);
}

int main() {
    struct Queue queue;
    initialize(&queue);

    // Enqueue elements into the queue
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 40);

    // Display queue elements
    display(&queue);

    // Dequeue element from the queue
    int dequeuedElement = dequeue(&queue);
    if (dequeuedElement != -1) {
        printf("Dequeued element: %d\n", dequeuedElement);
    }

    // Display queue elements after dequeue
    display(&queue);

    return 0;
}
