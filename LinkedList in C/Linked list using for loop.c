#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct node* next;
} node;

node* createLinkedList(int n);
void display(node* head);

int main() {
    node* head = NULL;
    int size;
    
    printf("Enter the size of the linked list: ");
    scanf("%d", &size);
    
    head = createLinkedList(size);

    display(head);
    
    return 0;
}

node* createLinkedList(int size) {
    node* head = NULL;
    node* temp = NULL;
    node* point = NULL;

    for(int i = 0; i < size; i++) {
        
        //create individual, isolated node na puros ga point ug NULL {
        temp = malloc(sizeof(node));

        printf("Enter data for node #%d: ", i + 1);
        scanf("%d", &(temp->data));
        temp->next = NULL;    //if the loop is running for the first time, mao ni ang first and the last node.

        if(head == NULL) {            //if the list is empty,
            head = temp;             //make the head as the first node
        }      
        else {                //else if the list is naay sulod;                                         to visualize 2->3->4->5->NULL          6->NULL
            point = head;     //gamit tag lain pointer para mo iterate sa linked list nya mao sad niy logic if mag add kag lain data sa linked list
            while (point->next != NULL)  //mintras (while) ang pointer kay dili equal to NULL,
                point = point->next;     //tig iterate sa pointer sud sa linked list                    to visualize 2->3->4->5(point is here)->NULL  6->NULL
            point->next = temp;          //na break na ang loop, iinsert ang last inputed data          to visualize 2->3->4->5->6->NULL
        }
    }
    return head;
}

void display(node* head) {
    node* point = NULL;
    point = head;
    while(point != NULL) {
        printf("%d", point->data);
        if(point->next != NULL)
            printf(" -> ");
        point = point->next;
    }
}