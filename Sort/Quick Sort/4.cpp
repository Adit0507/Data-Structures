// QUICK SORT // 
// It picks an element as pivot and partitions
//  the given array around the picked pivot

#include "bits\stdc++.h"
using namespace std;

void swap(int *a,int *b)
{
    int t  = *a;
    *a = *b;
    *b = t;
}

int Part(int A[] , int l , int r)
{
    int p = A[r]; 
    int i = l-1;

    for(int j = l; j < r; j++){

        if(A[j] <= p)
        {
            i++;                
            swap(&A[i], &A[j]); 
        }
    }
    swap(&A[i+1], &A[r]);
    return i+1;
}

void QuickSort(int A[] , int l , int r){

    if(l < r){
        
        int pi = Part(A , l , r);
        QuickSort(A, l , pi-1);
        QuickSort(A, pi+1,r);

    }
}

void Display(int A[], int size){

    for(int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout <<endl;
}

int main()
{
    int A[9] = {33,4,-1,43,-19,-71,6,69,-5};

    QuickSort(A , 0 , 8);

    cout << "Sorted array" <<endl;
    cout <<"\n";

    Display(A , 8);
}

