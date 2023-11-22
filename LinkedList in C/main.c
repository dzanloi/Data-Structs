#include <stdio.h>
#include "list.h"
#include <stdlib.h>

int main() {
    int size = getsize();
    Node* head = NULL;
    head = createList(size);

    int beg = getbeg();
    head = insertAtBeginning(beg, head);

    int end = getend();
    head = insertAtEnd(end, head);
    
    display(head);
    return 0;
}