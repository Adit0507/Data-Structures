// MAXIMUM ELEMENT IN LINKED LIST

#include "bits\stdc++.h"
using namespace std;

class Node{
    public :  
        int data;
        Node *next;
};

int Max(Node *p)
{
    int m = INT_MIN;

    while(p != NULL)
    {
        if(p -> data > m)
            m = p -> data;
        p = p -> next;
    }
    
    return m;
}

int main()
{
    int A[] = {52,70,14,5};

    Node *head = new Node;
    head -> data = A[0];
    head ->next = NULL;

    Node *temp;
    Node *last;
    last = head;

    for(int i=0; i < sizeof(A)/ sizeof(A[0]); i++){
        
        temp = new Node;
        temp -> data = A[i];
        temp -> next = NULL;

        last -> next = temp;
        last = temp;
    }

    cout << Max(head) << " ";

    return 0;
}