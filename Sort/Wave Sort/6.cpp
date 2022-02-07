// WAVE SORT //

#include "bits\stdc++.h"
using namespace std;

void swap(int *x , int *y){
    int t = *x;
    *x = *y;
    *y = t;
}


void WaveSort(int A[] , int n)
{
    for(int i = 0; i < n; i+=2)
    {
        if(i > 0 && A[i-1] > A[i])
            swap(&A[i] , &A[i-1]);
        
        if(i < n-1 && A[i] < A[i+1])
            swap(&A[i] , &A[i+1]);
    }
}

int main()
{
    int A[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(A)/sizeof(A[0]);
    WaveSort(A,n);

    for(int i=0; i<n; i++)
    {
        cout << A[i] <<" ";
    }

    return 0;
}