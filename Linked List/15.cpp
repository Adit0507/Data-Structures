/*DOUBLY LINKED LIST

    DDL contains an extra pointer called the previous pointer, together with the next pointer and data which are there in a singly
    linked list.
*/

#include "bits\stdc++.h"
using namespace std;

class Node{
    public:
    int data;
    Node *next; 
    Node *prev;
};

int main()
{
    int A[] = {3,1,6,2,9,17,43,21};
    int n = sizeof(A) / sizeof (A[0]);

    Node *head = new Node;
    head -> data = A[0];
    head -> prev = head -> next = NULL;


    Node *last;
    last = head;

    Node *temp;

    for(int i = 1; i < n; i++){
        temp = new Node;
        temp -> data = A[i];
        temp -> next = last -> next;
        temp -> prev = last;
        last -> next = temp;
        last = temp;

    }

    Node *p = head;
    while(p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }

    return 0;
}