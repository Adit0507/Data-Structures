// CIRCULAR LINKED LIST 

#include <iostream>
using namespace std;

class Node{
    public :
        int data;
        Node *next;
};

class CircularLinked{ 
    private :
        Node *head;

    public:
        CircularLinked(int *A ,int n);
        void Display();
        void RecursiveDisplay(Node *p);
        Node *GetHead() {return head;}
        ~CircularLinked ();
};

CircularLinked :: CircularLinked(int * A , int n){
    
    head = new Node;
    head -> data = A[0];
    head -> next = head;

    Node *t;
    Node *last;
    last = head;

    for(int i = 1; i < n; i++){
        t = new Node;
        t -> data = A[i];
        t -> next = last -> next;
        
        last -> next = t;
        last = t;
    }
}

void CircularLinked :: Display(){
    Node *p = head;
    do{
        cout << p -> data << " -> " << flush;
        p = p -> next;
    }while(p != head);
    cout << endl;
}

void CircularLinked :: RecursiveDisplay(Node *p){
    static int flag = 0;
    if (p != head || flag == 0){
        flag = 1;
        cout << p->data << " -> " << flush;
        RecursiveDisplay(p->next);
    }
    flag = 0;
}

CircularLinked :: ~CircularLinked(){
    Node* p = head;
    while (p->next != head){
        p = p->next;
    }
 
    while (p != head){
        p->next = head->next;
        delete head;
        head = p->next;
    }
 
    if (p == head){
        delete head;
        head = nullptr;
    }
    
}

int main()
{
    int A[] = {3,1,5,6,7,81,19};
    int n = sizeof (A) / sizeof(A[0]);

    CircularLinked C(A , n);    

    C.Display();
    
    Node *H = C.GetHead();
    C.RecursiveDisplay(H);
    
    return 0;
} 