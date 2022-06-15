#include "bits\stdc++.h"
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *deleteNode(Node *head)
{
    if(head == NULL)
        return NULL;

    else {
        Node *temp= head->next; //Store head->next in temp, deallocates head
        delete head;

        return temp;
    }

}

