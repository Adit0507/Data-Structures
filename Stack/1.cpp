/* 
STACK USING ARRAY

*/

#include "bits\stdc++.h"
using namespace std;

class Stack{

    int size;
    int top;
    int *S;


    public:
        Stack(int size);
        ~Stack();
        void Push(int x);
        int Pop();
        int Peek(int index);
        int IsEmpty();
        void Display();
        int IsFull();
        int StackTop();

};

Stack :: Stack(int size){
    this -> size = size;
    top = -1;
    S  = new int [size];
}

Stack :: ~Stack(){
    delete [] S;
}

int Stack :: IsFull() {
    if (top == size -1){ 
        return 1;
    }
    return  0;
}

int Stack :: IsEmpty(){
    if (top == -1){
        return 1;
    }
    return 0;
}

void Stack :: Push(int x) {
    if (IsFull()){
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        S[top] = x;
    }
}
 
int Stack :: Pop() {
    int x = 1;
    if (IsEmpty()){
        cout << "Stack Underflow!" << endl;
    } else {
        x = S[top];
        top--;
    }
    return x;
}
 
int Stack:: Peek(int index) {
    int x = -1;
    if (top-index+1 < 0 || top-index+1 == size){
        cout << "Invalid position!" << endl;
    } else {
        x = S[top-index+1];
    }
    return x;
}

void Stack :: Display(){
    for(int i = top; i >= 0; i --){
        cout << S[i] << " " << flush;
    }
    cout << endl;
}

int Stack:: StackTop() {
    if (IsEmpty()){
        return -1;
    }
    return S[top];
}
 
int main()
{
    int A[] = {31,2,8,11,72,3,1,47,9};
    int n = sizeof (A) / sizeof (A[0]);

    Stack S(n);

    for(int i = 0; i < n; i++){
        S.Push(A[i]);
    }

    S.Pop();
    S.Push(29);

    cout << "Stack : \n"; 
    S.Display();

    cout << "Peek at 0th: " << S.Peek(0) << endl;
    cout << "Peek at 3rd: " << S.Peek(3) << endl;
    cout << "Peek at 10th: " << S.Peek(10) << endl;
 
    // Top element
    cout << "Top element: " << S.StackTop() << endl;
 
    // Pop out elements from stack
    cout << "Popped out elements: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cout << S.Pop() << ", " << flush;
    }
    cout << endl;
    S.Pop();
 
    cout << "Stack empty: " << S.IsEmpty() << endl;


    return 0;
}