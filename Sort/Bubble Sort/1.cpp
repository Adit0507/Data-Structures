// WORKS BY REPEATEDLY SWAPPING THE
// ADJACENT ELEMENTS IF THEY ARE IN WRONG ORDER 

#include "bits\stdc++.h"
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int A[], int n)
{ 
    int i, j;
    for(int i=0;i<(n-1); i++)
    { 
        for(j=0;j <(n-i-1);j++)
        {
            if(A[j] > A[j+1])
            swap(&A[j],&A[j+1]);
        }
    }
}

void PrintArray(int A[] , int size)
{
    for(int i=0;i< size; i++)
    {
        cout << A[i]<<" ";
    }
}
int main()
{
    int A[] = {12,6,3,7,5,10};
    int n = sizeof(A)/ sizeof(A[0]);
    BubbleSort(A,n);

    cout << "Sorted Array is"<<endl;
    PrintArray(A,n);
    
    return 0;
}