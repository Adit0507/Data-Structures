/* INSERTING IN A LINKED LIST

TIME COMPLEXITY - O(1) for Inserting at the first position
               
                - O(n) for Inserting 
*/

#include "bits\stdc++.h"
using namespace std;

class Node{
    public :
        int data;
        Node *next;
};


int Count(Node *N)
{
    int l = 0;
    while(N)
    {
        l++;
        N = N-> next;
    }
    return l;
}

void Insert(Node *p , int index , int x)
{
    Node *head = new Node;
    
    Node *t =new Node;
    t -> data = x;

    if(index < 0 || index > Count(p))
        return;


    if(index == 0)                  // INSERTING AT FIRST NODE
    {
        t -> next = head;
        head = t;
    }
    else
    {
        for(int i= 1; i < index - 1; i++)
            p =p -> next;
        t -> next = p ->next;
        p -> next = t;
    }

}

int main()
{
    int A[] = {2,3,41,7,8,17,6};
    int n = sizeof(A) / sizeof(A[0]);

    Node *head = new Node;
    head -> data = A[0];
    head -> next = NULL;

    Node *temp;
    Node *last;
    last = head;

    for(int i=1; i < n; i++){

        temp = new Node;
        temp -> data = A[i];
        temp -> next = NULL;

        last -> next = temp;
        last = temp;
    }
    
    Node *p = head;
    Insert(p , 2 , 50);                   // FOR FIRST NODE, 1 SHOULD BE USED
    while(p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
    
    return 0;
}