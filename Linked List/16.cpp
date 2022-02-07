/* 
    INSERTING IN A DOUBLY LINKED LIST

    
*/

#include "bits\stdc++.h"
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;
};

int Count(Node *N)
{
    int c = 0;
    while(N != NULL){
        c ++;
        N = N -> next;
    }
    return c;
}

void Insert(Node *p , int index,  int x)
{
    Node *t;
    Node *head = new Node;

    if(index < 0 || index > Count(p))
        return;

    if(index == 0)          // INSERTING AT FIRST NODE
    {
        t = new Node;
        t -> data = x;
        t -> prev = NULL;
        t -> next = head;
     
        if(head){
            head -> prev = t;
            head = t;
        }
    }

   else{
       for(int i=0; i < index -1; i++){
           p = p -> next;
       }

       t = new Node;
       t -> data = x;
       t -> next = p -> next;
       t -> prev = p;

       if(p -> next){
           p->next -> prev =t; 
       }
       p -> next = t;
   } 
}


int main()
{
    int A[] = {2,4,1,7,78,91,16};
    int n = sizeof (A) /sizeof (A[0]);

    Node *head = new Node;
    head -> data = A[0];
    head -> next  = NULL;

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

    Insert(p , 4 ,100);

    while (p != NULL)
    {
        cout << p -> data << " ";
        p = p -> next;
    }
    
    return 0;
}