// INSERTION SORT //
// Insertion sort is a simple sorting algorithm that works 
// similar to the way you sort playing cards in your hands. 
// The array is virtually split into a sorted and an unsorted part.
// Values from the unsorted part are picked and placed at the correct position in the sorted part.

#include "bits\stdc++.h"
using namespace std;

void InsertionSort(int A[] , int n)
{
    int key;
    for(int i=0; i<n; i++)
    {
        key = A[i];
        int j = i-1;
    
        while(A[j] > key && A[j] >=0)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
} 

void PrintArr(int A[] , int size)
{
    for(int i=0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    int A[] = {3,1,7,2,8};
    int n = sizeof(A) / sizeof(A[0]);

    InsertionSort(A,n);
    PrintArr(A,n);
    return 0;
}