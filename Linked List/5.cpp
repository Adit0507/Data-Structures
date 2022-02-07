// SEARCHING IN A LINKED LIST


#include "bits\stdc++.h"
using namespace std;

class Node{
    public :
        int data;
        Node *next;
};

Node *LSearch(Node *p ,int key)            // LINEAR SEARCH
{
    while(p !=NULL)
    {
        if(key == p -> data)
            return p;
        p = p -> next;
    }
    return NULL;
}

Node *RSearch(Node *p , int key)            // RECURSIVE SEARCH
{
    if(p == NULL)
        return NULL;
    if(key == p -> data)
        return p;
    
    return RSearch(p -> next , key);
}


int main()
{
    int A[] = {3,4,1,7,8,9,11,71,31,42};

    Node *head = new Node;
    head -> data = A[0];
    head -> next = NULL;

    Node *temp;
    Node *last;
    last = head;

    for(int i=1; i < sizeof(A) / sizeof(A[0]); i++){

        temp = new Node;
        temp -> data = A[i];
        temp -> next = NULL;
 
        last -> next = temp;
        last = temp;
    }

    temp = RSearch(head , 11);
    if(temp)
        cout << "Key is found : " << temp -> data << endl;

    else
        cout << "Key not found";

    temp = LSearch(head , 11);
    if(temp)
        cout << "Key is found : " << temp -> data << endl;    
    else    
        cout << "Key not found" << endl;

    Node *p = head;
    while(p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
    return 0;
}   