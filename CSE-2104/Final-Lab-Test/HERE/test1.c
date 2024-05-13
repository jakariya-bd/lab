#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node* create_node(int data){
    Node* n = (Node*) malloc( sizeof(Node) );
    n->data = data;
    n->next = NULL;

    return n;
};

Node* head = NULL;

void create_lists(){
    // 2 3 4 5
    Node* t;
    t = create_node(2);
    // t->next = null; [2] - > NULL
    head = t;
    t->next = create_node(3);
    // [2] -> [3] -> null
    t = t->next;
    t->next = create_node(4);
    // [2] -> [3] -> [4] -> null
    t = t->next; // t=[4]
    t->next = create_node(5);

}

void display(){
    Node* t = head;
    while( t != NULL ){
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

void insert_at_start(int data){
    Node* n = create_node(data);
    n->next = head;
    head = n;
}

void delete_at_start(){
    Node* t = head;
    head = head->next;
    free(t);
}

void insert_at_end(int data){
    Node* n = create_node(data);
    Node* t = head;
    while( t->next != NULL ){
        t = t->next;
    }
    t->next = n;
}

void delete_at_end(){
    Node* prev = head;
    Node* t = head->next;

    while( t->next != NULL ){
        t = t->next;
        prev = prev->next;
    }
    prev->next = NULL;

    free(t);

}

void delete_at_pos(int pos){
    Node* t = head;
    int tp = 0;

    while( tp < pos - 1 ){
        t = t->next;
        tp ++;
    }
    Node* target = t->next;
    Node* tnext = target->next;
    t->next = tnext;

    free( target );


}


void insert_at_pos(int data, int pos)
{
    Node* n = create_node(data);
    Node* t = head;
    int tp = 0;

    while( tp < pos-1 ){
        t = t->next;
        tp ++;
    }
    // t
    n->next = t->next;
    t->next = n;
}


int main(void)
{
    create_lists();
    display();
    insert_at_start(7);
    display();
    insert_at_end(11);
    display();

    insert_at_pos(15, 2);
    display();

    delete_at_start();
    display();
    delete_at_end();
    display();

    delete_at_pos(2);
    display();

    return 0;
}
