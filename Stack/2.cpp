/* 
    STACK USING LINKED LIST 

*/
#include "bits\stdc++.h"
using namespace std;

class Node{
    public :
        int data;
        Node *next;
};


class Stack{
    Node *top;

    public :
        Stack();
        ~Stack();
        void Push (int x);
        int Pop();
        int Peek (int index);
        int IsEmpty ();
        int IsFull ();
        int StackTop ();
};

Stack :: Stack(){
    top = NULL;
}

Stack::~Stack() {
    Node* p = top;
    while (top){
        top = top->next;
        delete p;
        p = top;
    }
}
 
void Stack:: Push(int x) {
    Node* t = new Node;
    if (t == nullptr){
        cout << "Stack Overflow!" << endl;
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}
 
int Stack:: Pop() {
    Node* p;
    int x = -1;
    if (top == nullptr){
        cout << "Stack Underflow!" << endl;
    } else {
        p = top;
        x = p->data;
        top = top->next;
        delete p;
    }
    return x;
}
 
int Stack::IsFull() {
    Node* t = new Node;
    int r = t ? 1 : 0;
    delete t;
    return r;
}
 
int Stack::IsEmpty() {
    return top ? 0 : 1;
}
 
int Stack:: StackTop() {
    if (top){
        return top->data;
    }
    return -1;
}
 
int Stack:: Peek(int index) {
    if (IsEmpty()){
        return -1;
    } else {
        Node* p = top;
 
        for (int i=0; p != nullptr && i<index-1; i++){
            p = p->next;
        }
 
        if (p != nullptr){
            return p->data;
        } else {
            return -1;
        }
    }
}
 
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Stack stk;
 
    // Populate stack
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        stk.Push(A[i]);
    }
 
    cout << "Stack peek at 3rd: " << stk.Peek(3) << endl;
    cout << "Stack peek at 10th: " << stk.Peek(10) << endl;
    cout << "Stack top: " << stk.StackTop() << endl;
    cout << "Stack full: " << stk.IsFull() << endl;
    cout << "Stack empty: " << stk.IsEmpty() << endl;
 
    // Pop out elements from stack
    cout << "Popped: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cout << stk.Pop() << ", " << flush;
    }
    cout << endl;
 
    // Underflow
    cout << stk.Pop() << endl;
 
    return 0;
}