//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef NODE_H
#define NODE_H

struct node {
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;

void enqueue(NodePtr *head, NodePtr *tail, int x) {
    Node* new_node = (NodePtr)malloc(sizeof(Node));
    if (new_node) { 
        new_node->data = x;
        new_node->nextPtr = NULL;
        if (*head == NULL) 
            *head = new_node;
        else 
            (*tail)->nextPtr = new_node;              
        *tail = new_node;
    }
}

int dequeue(NodePtr *head, NodePtr *tail) {
    if (*head == NULL) {
        printf("Empty queue\n");
        return 0;
    }
    
    NodePtr t = *head;
    int value = t->data;
    *head = t->nextPtr;
    if (*head == NULL) 
        *tail = NULL;
    free(t);
    return value;
}

#endif
