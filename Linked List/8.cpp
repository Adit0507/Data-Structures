/* DELETING A NODE FROM A LINKED LIST 

  * NOT WORKING !!!!!!!!!!!!!!!!!!!!!!!!!!!! *

*/
#include "bits\stdc++.h"
using namespace std;

class Node{
    public:
        int data;
        Node *next; 
};

int Count(Node *p)
{
    int c = 0;  
    while(p != NULL){
        c ++;
        p = p -> next;
    }
    return c;
}

int Delete(Node *p , int index)    // i = index
{
    Node *q =new Node;
    q = NULL;
    int x = -1;

    if(index < 1 || index > Count(p))
        return -1;
    
    if(index == 1)
    {
        q = p;
        x = p -> data;
        p = p ->next;
        delete [] q;
        return x;
    }
    else
    {
        for(int i=0; i < index -1; i++){
            q = p;
            p = p -> next;
        }
        q -> next = p -> next;
        x = p -> data;
        delete p;

        return x;
    }

    return -1;

}

int main()
{   
    int A[] = {2,1,5,6,8,9,15,11};
    int index;
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Enter index : ";
    cin >> index;
   
    Node *head = new Node;
    head -> data = A[0];
    head -> next = NULL;

    Node *last;
    last = head;

    Node *p =head;

    for(int i= 1; i < n; i++){
        Node *temp = new Node;
        temp -> data = A[i];

        last -> next = temp;
        last = temp;
    }

    Delete(head , index);
 
 
    while(p != NULL){
        cout << p -> data <<" ";
        p = p -> next;
    }

    return 0;
}