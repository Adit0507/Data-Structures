/*
    QUEUE USING 2 STACKS
 */

#include "bits\stdc++.h"
using namespace std;

class Queue {
    stack<int> e_stk;
    stack<int> d_stk;

    public:
        Queue() {};
        ~Queue() {};
        void enqueue(int x);
        int dequeue();
};

void Queue :: enqueue(int x){
    e_stk.push(x);
}

int Queue :: dequeue(){
    int x  = -1;

    if(d_stk.empty()) {
        if(e_stk.empty()) {
            cout << "Queue Underflow" << endl;
        }
        else{
            while(!e_stk.empty()) {
                d_stk.push(e_stk.top());
                e_stk.pop();
            }
        }
    }
    x = d_stk.top();
    d_stk.pop();
    return x;
}

int main()
{
    int A[] = {1,3,5,7,9};
    int n = sizeof (A) / sizeof(A[0]);

    Queue Q;

    cout << "Enqueue: " << flush;
    for(int i = 0; i < n; i++) {
        Q.enqueue(A[i]);
        cout <<  A[i] << " " <<flush;
    }

    return 0;
}