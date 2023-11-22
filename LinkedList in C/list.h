typedef struct {
    int data;
    struct Node* next;
} Node;

int getsize();
Node* createList(int size);
int getbeg();
Node* insertAtBeginning(int beg, Node* head);
int getend();
Node* insertAtEnd(int end, Node* head);
void display(Node* head);