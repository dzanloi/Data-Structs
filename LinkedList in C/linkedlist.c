#include <stdio.h>
#include <stdlib.h>

// Creating a structure to represent a node in the linked list
struct node {
    int data;              // Data stored in the node
    struct node *next;     // Pointer to the next node
};

void display(struct node *head);

int main() {
    struct node *head = NULL, *point = NULL, *newNode;  // Creating pointers to the head, list, and new nodes
    int elem, ans;

    do {
        newNode = malloc(sizeof(struct node));  // Creating a new node

        printf("Enter an element: ");
        scanf("%d", &elem);
        newNode->data = elem;  // Storing the entered element in the new node
        newNode->next = NULL;  // Setting the next pointer of the new node to NULL (for now)

        if (head == NULL) {
            // If it is the first node being added, make it the head and the point
            head = newNode;
            point = newNode;
        } else {
            // If it is not the first node, link it to the end of the existing list
            point->next = newNode;
            point = point->next;  // Move the point pointer to the newly added node
        }

        printf("Input another (1 - yes, 0 - no): ");
        scanf("%d", &ans);
    } while (ans == 1);

    display(head); //function to display the linked list
    
    return 0;
}

void display(struct node *head) {
    if(head == NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL) {
        printf("%d", ptr->data);
        if(ptr->next != NULL) //if the pointer to next list is not equal to null, then print the comma. IF NOT THE LAST, PRINT COMMA
            printf(", ");
        ptr = ptr->next;
    }
}