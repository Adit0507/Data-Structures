// MERGING 2 SORTED LINKED LISTS

// NOT WORKING

#include "bits\stdc++.h"
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};


Node *SortedMerge(Node *A , Node *B)
{
    Node *result = NULL;
    if(A == NULL){
        return B;
    }
    if(B == NULL){
        return A;
    }

    if(A -> data < B -> data){
        result = A;
        result -> next = SortedMerge(A -> next , B);
    }
    else{
        result = B;
        result -> next = SortedMerge(A , B -> next);
    }
    return result;
}


int main()
{
    int A[] = {3,12,8,6,7,11,13};
    int B[] = {1,4,2,7,9,1,41,17};

    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);

    Node *head1 = new Node;
    head1 -> data = A[0];
    head1 -> next = NULL;

    Node *head2 = new Node;
    head2 -> data = B[0];
    head2 -> next = NULL;


    Node *last;
    last = head1;

    Node *last2;
    last2 = head2;

    Node *Result = NULL;

    for(int i = 1; i < m; i++){
        Node *temp = new Node;

        temp -> data = A[i];
        temp -> next = NULL;

        last -> next = temp;
        last = temp;
    } 

    for(int i = 1; i < m; i++){
        Node *temp = new Node;

        temp -> data = B[i];
        temp -> next = NULL;

        last2 -> next = temp;
        last2 = temp;
    }

    Node *p = head1;
                                // ERROR

    Node *q = head2;
    
 
    while(p != NULL){
        cout << p -> data <<" " << endl;
        p = p -> next;
    }
    
    while(q != NULL){
        cout << q -> data <<" ";
        q = q -> next;
    }

    cout << SortedMerge(head1 , head2);

    return 0;
}