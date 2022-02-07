/*
    QUEUE USING ARRAY

    Follows FIFO (First In First Out)

*/

#include "bits\stdc++.h"
using namespace std;

class Queue{

    int size;
    int front;
    int rear;
    int *Q;

    public:
        Queue(int size);
        ~Queue();
        bool IsFull();
        bool IsEmpty();
        void enqueue(int x);
        int dequeue();
        void Display();
};


Queue :: Queue(int size){
    this -> size = size;
    front = -1;
    rear = -1;
    Q = new int [size];
}


Queue :: ~Queue(){
    delete [] Q;
}


bool Queue :: IsFull(){
    if(rear == size - 1){
        return true;
    }
    return false;
}
 

bool Queue :: IsEmpty(){
    if(front == rear){
        return true;
    }
    return false;
}


void Queue :: enqueue(int x){
    if(IsFull()){
        cout << "Queue overflow" << endl;
    }
    else{
        rear ++;
        Q[rear] = x;
    }
}


int Queue :: dequeue(){
    int x = -1;
    if(IsEmpty()){
        cout << "Queue Underflow" << endl;
    }
    else{
        front ++;
        x = Q[front];
    }
    return x;
}


void Queue :: Display(){
    for(int i = front + 1; i <= rear; i++){
        cout << Q[i] << " " << flush;

        if(i < rear){
            cout << " <- " << flush;
        }
    }
    cout << endl;
}


int main()
{
    int A[] = {3,1,5,7,15,61,9,17,29};
    int n = sizeof(A) / sizeof (A[0]) + 1;


    Queue Q(n);

    for(int i = 0; i < n; i++){
        Q.enqueue(A[i]);
    }

    Q.Display();

    Q.enqueue(10);

    for(int i = 0; i < n; i++){
        Q.dequeue();
    }


    Q.Display();
    return 0;
}