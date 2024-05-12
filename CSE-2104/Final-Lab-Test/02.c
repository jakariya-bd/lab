#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

// Function to insert a node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL)
        return newNode;
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Function to insert a node at an intermediate position of the linked list
struct Node* insertAtPosition(struct Node* head, int data, int position) {
    struct Node* newNode = createNode(data);
    if (position == 1) {
        newNode->next = head;
        return newNode;
    }
    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position.\n");
        return head;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Function to delete a node from the beginning of the linked list
struct Node* deleteFromBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return NULL;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Function to delete a node from the end of the linked list
struct Node* deleteFromEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    return head;
}

// Function to delete a node from an intermediate position of the linked list
struct Node* deleteFromPosition(struct Node* head, int position) {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return NULL;
    }
    if (position == 1) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;
    for (int i = 1; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position.\n");
        return head;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Inserting elements into the linked list
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);
    head = insertAtEnd(head, 40);

    printf("Initial linked list:\n");
    display(head);

    // Inserting at the beginning
    head = insertAtBeginning(head, 5);
    printf("\nLinked list after inserting at the beginning:\n");
    display(head);

    // Inserting at an intermediate position
    head = insertAtPosition(head, 25, 4);
    printf("\nLinked list after inserting at position 4:\n");
    display(head);

    // Deleting from the end
    head = deleteFromEnd(head);
    printf("\nLinked list after deleting from the end:\n");
    display(head);

    // Deleting from a specific position
    head = deleteFromPosition(head, 3);
    printf("\nLinked list after deleting from position 3:\n");
    display(head);

    return 0;
}
