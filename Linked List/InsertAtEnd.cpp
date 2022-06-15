#include "bits\stdc++.h"
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *insertAtEnd(Node *head, int x)
{
    Node*temp = new Node(x);
    
    if (head == NULL)
        return temp;

    Node *curr = head;

    while(curr ->next != NULL)
        curr = curr->next;
    curr->next = temp;
    
    return head;
};

int main(){

    return 0;
}