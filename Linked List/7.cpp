/*
    MIDDLE NODE OF LINKED LIST
*/

#include "bits\stdc++.h"
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *head = new Node;

void Create(int A[], int n){
    Node *temp;
    Node *last;

    head -> data = A[0];
    head -> next = NULL;
    last = head;

    for(int i = 1; i < n; i++){
        temp = new Node;
        temp -> data = A[i];
        temp -> next = NULL;
        last -> next = temp;
        last = temp;
    }
}

void MiddleNode1(Node *p){
    int l = 0;
    while(p){
        l ++;
        p = p -> next;
    }

    int index = (int)ceil(l/2.0);
    Node *q = head;


    for(int i = 0; i < index -1; i++){
        q  = q -> next;
    }
    cout << q -> data << " " << endl; 
}

void MiddleNode2(Node *p){
    Node *q = p;
    while(q){
        q  = q -> next;
        if(q){
            q  = q -> next;
        }
        if(q){
            p = p -> next;
        }
    }
    cout << "Middle Element : " << p -> data << endl;
}

int main()
{
    int A[] = {35,1,7,21,9,15,17};
    int n = sizeof (A) / sizeof (A[0]);

    Create(A , n);

    cout << endl;

    MiddleNode1(head);

    MiddleNode2(head);

    return 0;
}