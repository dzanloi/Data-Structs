#include <stdio.h>
#include "list.h"
#include <stdlib.h>

int getsize() {
    int size;
    printf("Enter the size of the Linked List: ");
    scanf("%d", &size);
    return size;
}

Node* createList(int size) {
    Node* head = NULL;
    Node* tail = NULL;
    Node* newNode = NULL;

    for(int i = 0; i < size; i++) {
        newNode = malloc(sizeof(Node));

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &(newNode->data));
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

int getbeg() {
    int beg;
    printf("Enter data to be inserted at the beginning: ");
    scanf("%d", &beg);
    return beg;
}

Node* insertAtBeginning(int beg, Node* head) {
    Node* newNode = NULL;
    newNode = malloc(sizeof(Node));
    newNode->data = beg;
    newNode->next = head;
    return newNode;
}

int getend() {
    int end;
    printf("Enter data to be inserted at the end of the linked list: ");
    scanf("%d", &end);
    return end;
}

Node* insertAtEnd(int end, Node* head) {
    Node* newNode = NULL;
    newNode = malloc(sizeof(Node));
    newNode->data = end;
    
    Node* pointer = NULL;
    pointer = head;
    while(pointer->next != NULL) {
        pointer = pointer->next;
    }
    pointer->next = newNode;
    return head;
}

void display(Node* head) {
    Node* pointer = NULL;
    pointer = head;
    printf("Linked List contents: ");
    while(pointer != NULL) {
        printf("%d ", pointer->data);
        pointer = pointer->next;
    }
    return;
}