#include "bits\stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *next;
};

// Iterative
int search(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;

    while(curr != NULL)
    {
        if(curr->data == x)
            return pos;
        else{
            pos ++; 
            curr = curr->next;
        }
    }
    return -1;
}


// Recursive
int Rsearch(Node *head, int x)
{
    if(head == NULL)
        return -1;

    if(head->data == x)
        return 1;

    else {
        int res = search(head->next, x);
        if(res == -1) 
            return -1;
        else
            return  (res + 1);
    }
}