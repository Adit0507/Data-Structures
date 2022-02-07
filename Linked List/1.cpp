#include "bits\stdc++.h"
using namespace std;

class Node{
    public:
        int data;
        Node  *next;    // POINTER FOR THE NEXT NODE
};
 
int main()
{
    int A[] = {2,6,3,4,9,11};
 
    Node *head = new Node;
    head->data = A[0];
    head->next = NULL;
   
    Node *temp;
    Node *last;
    last = head;


    // CREATE A LINKED LIST
    for(int i=1; i < sizeof(A)/ sizeof(A[0]); i++){

        // Create a temporary node
        temp = new Node;

        // Populate temporary node
        temp -> data = A[i];
        temp -> next = NULL;

        // last's next is pointing to temp
        last ->next = temp;
        last = temp;
    }

    // DISPLAY LINEKD LIST
    Node *p = head;

    while(p != NULL){
        cout <<p -> data << " " << flush;
        p = p->next;
    }
    
    return 0;
}