#include "bits\stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *DeleteLastNode(Node *head){
    if(head == NULL)
        return NULL;

    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *curr = head;
    
    while(curr->next ->next != NULL)
        curr = curr->next;
    delete(curr->next);
    curr->next = NULL;
    
    return head;
}