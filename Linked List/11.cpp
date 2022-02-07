// REVERSING A LINKED LIST

#include "bits\stdc++.h"
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *Reverse(Node *p , Node *q){
    int *A , i = 0;
    Node *q = p; 

    Node *A = new Node;

    while(q!=NULL)
    {
        A[i]=q->data;
        
        q=q->next;
        i++;
       
    }
        q=p;
        i--;
    while(q!=NULL)
    {
        q->data=A[i];
        q=q->next;
        i--;
    }
}

int main()
{
    int A[] = {2,4,1,6,11,17,9};
    int n = sizeof(A) / sizeof(A[0]);

    Node *head = new Node;
    head -> data = A[0];
    head -> next = NULL;

    Node *last;
    last = head;

    for(int i=0; i < n; i++){
        Node *temp = new Node;
        temp -> data = A[i];
        temp -> next= NULL;

        last -> next = temp;
        last = temp;
    }

    Node *p = head;
    Node *q;
    Reverse(p , q);    

    while (p != NULL)
    {
        /* code */
        cout << p -> data << " ";
        p = p -> next;
        
    }
    

    return 0;
}