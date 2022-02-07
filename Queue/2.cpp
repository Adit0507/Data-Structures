/*
    CIRCULAR QUEUE
*/

#include "bits\stdc++.h"
using namespace std;

class CircularQueue{
    int size;
    int front;
    int rear;
    int *Q;
        
    public:
        CircularQueue(int size);
        ~CircularQueue();
        bool IsFull();
        bool IsEmpty();
        void Enqueue(int x);
        int Dequeue();
        void Display();
};

CircularQueue :: CircularQueue(int size){
    this -> size = size;
    front  = 0;
    rear = 0;
    Q = new int[size];

}

CircularQueue :: ~CircularQueue(){
    delete []  Q;
}


bool CircularQueue :: IsFull(){
    if((rear + 1) % size == front){
        return true;
    }
    return false;
}


bool CircularQueue :: IsEmpty(){
    if(front == rear){
        return true;
    }
    return false;
}


void CircularQueue :: Enqueue(int x){
    if(IsFull()){
        cout << "Queue Overflow" << endl;
    }
    else{
        rear = (rear + 1) % size;
        Q[rear] = x;
    }
}

int CircularQueue :: Dequeue(){
    int x = -1;

    if(IsEmpty()){
        cout << "Queue Underflow" << endl;
    }
    else{
        front = (front + 1) % size;
        x = Q[front];
    }
    return x;
}

void CircularQueue :: Display(){
    int i = front + 1;
    
    do{
        cout << Q[i] << flush;

        if(i < rear){
            cout << " <- " << flush;
        }
        i = (i + 1) % size;
    } while(i != (rear + 1)% size);
}

int main()
{
    int A[] = {3,1,4,7,87,19,13,41};
    int n = sizeof (A) / sizeof(A[0] + 1);

    CircularQueue W(n);

    for(int i = 0; i < n; i++){
        W.Enqueue(A[i]);
    }

    W.Display();
    cout << endl;

    W.Enqueue(12);

    W.Display();

    return 0;
}