// SUM OF ALL ELEMENTS AND COUNT IN THE LINKED LIST

#include "bits\stdc++.h"
using namespace std; 

class Node{
    public :
        int data;
        Node *next;
};

int Sum(Node *p){                   // SUM OF ELEMENTS 
        int sum = 0;
        while(p != NULL){
                sum += p -> data;
        p = p -> next;
        }
    return sum;
}

int Count(Node *p){             // COUNT FUNCTION
    int c = 0;
    while(p != NULL){
        c ++;
        p = p -> next;
    }
    return c;
}

int main()
{
    int A[] = {3,1,6,9,8,11};
    int n  = sizeof(A) / sizeof(A[0]);
    int sum = 0;

    Node *head = new Node;
    head -> data = A[0];

    Node *last;
    last = head;

    Node *temp;

    // CREATING A LINKED LIST
    for(int i=1; i < n; i++){
            temp = new Node;

            temp -> data = A[i];
            temp -> next = NULL;

            last -> next = temp;
            last = temp;
    }
    

   cout << Sum(head) << " " << endl;
    
   cout <<  Count(head);
    return 0;
}