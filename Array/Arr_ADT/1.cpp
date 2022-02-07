#include "bits\stdc++.h"
using namespace std;

class Array{

private:
    int *A; int size; int length;

public:
    Array(int size){
        this -> size = size;
        A = new int[size];
    }

    void create(){
        cout << "Enter no. of elements : ";
        cin >> length;

        cout << "Enter the array elements : ";
        for(int i = 0; i < size; i++){
            cin >> A[i];
        }
    }

    void display(){
        for(int i = 0; i < size; i++){
            cout << A[i] << " ";
        }
    }

    
};
 

int main()
{
    Array arr(10);
    arr.create();
    arr.display();

    return 0;
}
