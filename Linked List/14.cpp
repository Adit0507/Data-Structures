// INSERTING IN A CIRCULAR LINKED LIST

#include "bits\stdc++.h"
using namespace std;

class Node{
    public:
        int data; 
        Node *next;
};

class CircularLinked{
    private :
        Node *head;
    public:
        CircularLinked(int *A ,int n);
        void Insert(int pos, int x);
        void Display();
        Node *GetHead() {return head;}
};
 

int Count(Node *p){
    int c = 0;
    while(p != NULL){
        c ++;
        p = p -> next;
    }
    return c;
}

CircularLinked :: CircularLinked(int *A , int n){

    head = new Node;
    head -> data = A[0];
    head -> next = head;

    Node *t;

    Node *last;
    last = head;
    
    for(int i = 0; i < n; i++){

    }
}

void CircularLinked :: Insert(int pos , int x){

    Node *t; Node *p;

    if(pos < 0 || pos > Count(p))


    if(pos == 0){
        t -> data =x;
        if(head = NULL){
            head = t;
            head -> next = head;
        }
    else{
        while(p -> next != head)
            p = p-> next;
            p -> next = t;
            head =  t;   
        }
    }
    else{
        for(int i = 0; i < pos -1; i++)
            p = p -> next;
            t = new Node;
            t -> data = x;
            t -> next = p -> next;
            p -> next = t;
    }
}

int main()
{
    int A[] = {3,2,6,7,9,11};
    int n = sizeof(A) / sizeof(A[0]);

    Node *head = new Node;
    head -> data = A[0];
    head -> next = head;

    Node *last;
    last = head;

    CircularLinked(A , n);
    
    Node *p = head;
    while(p != head){
        cout << p -> data << " ";
        p = p-> next;
    }

    return 0;
}