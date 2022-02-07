// SELECTION SORT // 
// ( The selection sort algorithm sorts an array by repeatedly 
//   finding the minimum element (considering ascending order)
//   from unsorted part and putting it at the beginning.)


#include "bits\stdc++.h"
using namespace std;

void SelectionSort(int A[] , int n)
{
    int i , j;
    for(int i= 0 ; i < n; i++)
    {
        for(int j=i+1; j < n; j++)
        {
            if(A[j] < A[i])
            {
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
}
  
void PrintArr(int A[] , int size)
{
    for(int i=0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {4,3,5,7,8,1,9};
    int n = sizeof(A) / sizeof(A[0]);

    SelectionSort(A , n );
    PrintArr(A , n);
    return 0;
}