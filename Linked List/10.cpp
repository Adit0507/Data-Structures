// REMOVE DUPLICATES FROM LINKED LIST

#include "bits\stdc++.h"
using namespace std;

class Node{
    public:
        int data;
        Node *next;

};

void RemoveDuplicates(Node *p)
{
    Node *q = p -> next;

    while (q != NULL)
    {
       
    }
    

}
int main()
{
    int A[] = {};
    int n = sizeof(A) / sizeof(A[0]);


    Node *head = new Node;
    head -> data = A[0];
    head -> next = NULL;

    Node *last;
    last = head;

    for(int i=0; i < n; i++){
        Node *temp = new Node;
        temp -> data = A[i];

        Node *last = temp;
        last = temp;
    }
    return 0;
}