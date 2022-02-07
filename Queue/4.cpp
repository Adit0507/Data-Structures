/*
    DOUBLE ENDED QUEUE

    WE ARE NOT FOLLOWING "FIFO" HERE

*/
#include "bits\stdc++.h"
using namespace std;

class DEQueue{
    int front;
    int rear;
    int size;
    int *Q;


    public:
        DEQueue(int size);
        ~DEQueue();
        void Display();
        void EnqueueFront(int x);
        void EnqueueRear(int x);
        int DequeueFront();
        int DequeueRear();
        bool IsEmpty();
        bool IsFull();
};

DEQueue :: DEQueue(int size){
    this -> size = size;
    front = -1;
    rear = -1;
    Q = new int[size];
}

DEQueue :: ~DEQueue(){
    delete [] Q;
}

bool DEQueue ::IsEmpty(){
    if(front == rear){
        return true;
    }
    return false;
}

bool DEQueue :: IsFull(){
    if(rear == size -1){
        return true;
    }
    return false;
}


void DEQueue :: EnqueueFront(int x){
    if(front == -1){
        cout << "DEQueue Overflow"<< endl;
    }
    else{
        Q[front] = x;
        front --;
    }
}

void DEQueue :: EnqueueRear(int x){
    if(IsFull()){
        cout << "DeQueue Overflow" << endl;
    }
    else{
        rear ++;
        Q[rear] = x;
    }
}

int DEQueue :: DequeueFront(){
    int x = -1;

    if(IsEmpty()){
        cout << "DEQueue Underflow" << endl;
    }
    else{
        x = Q[front];
        front ++;
    }
    return x;
}

int DEQueue :: DequeueRear(){
    int x = -1;

    if(rear == -1){
        cout << "DEQueue Underflow" << endl;
    }
    else{
        x = Q[rear];
        rear --;
    }
    return x;
}

void DEQueue :: Display(){
    for(int i=front+1; i <= rear; i++){
        cout << Q[i] << flush;

        if(i < rear){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}

int main()
{
    int A[] = {1, 3, 5, 7, 9};
    int B[] = {2, 4, 6, 8};
 
    int m = sizeof(A)/sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);

    DEQueue P(m);

    for(int i = 0; i < m; i++){
        P.EnqueueRear(A[i]);
    }

    P.Display();

    

 
    return 0;
}