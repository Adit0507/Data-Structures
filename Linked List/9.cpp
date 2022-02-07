// CHECK IF A LINKED LIST IS SORTED OR NOT 


#include"iostream"
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int isSorted(Node *p)
{
    int x = -19999;
    while(p != NULL)
    {
        if(p -> data < x)
            return 0;
        x = p -> data;
        p = p -> next;
    }
    
    return 1;
}

int main()
{   
    int A[] = {4,5,6,7,8,1,2,3,};
    int n = sizeof(A) / sizeof(A[0]);
    
    Node *head = new Node;
    head -> data = A[0];
    head -> next = nullptr;

    Node *last;
    last = head;

    for(int i=0; i < n; i++){
        Node *temp = new Node;

        temp -> data = A[i];
        temp -> next = NULL;

        last -> next = temp;
        last = temp;
    }

    Node *p = head;

    cout << isSorted(p);

    return 0;
}