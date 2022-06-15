// T C: O(n)

struct Node{
    int data;
    struct Node *next;
};

void rPrint(Node *head){
    if(head == NULL)
        return;
    
    cout << head->data << " ";
    rPrint(head->next);
}

