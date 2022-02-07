// COUNT SORT 
// TIME COMPLEXITY OF COUNT SORT IS BETTER THAN MERGE AND QUICK SORT  //
// Counting sort is a sorting technique based on keys between a specific range. 
// It works by counting the number of objects having distinct key values (kind of hashing). 
//Then doing some arithmetic to calculate the position of each object in the output sequence.

#include "bits\stdc++.h"
using namespace std;

void Count_Sort(int A[] , int n)
{
    int k = A[0];
    for(int i = 0; i < n; i++)
    {
        k = max(k , A[i]);
    }

    int count[k] = {0};
    for(int i=0; i < n; i++)
    {
        count[A[i]]++;
    }

    for(int i=1; i <= k; i++)
    {
        count[i]+=count[i-1];
    }

    int output[n];
    for(int i = (n-1); i >=0; i--)
    {
        output[--count[A[i]]] = A[i];
    }

    for(int i = 0; i < n; i++)
    {
        A[i] = output[i];
    }
}

int main()
{
    int A[10] = {1,3,2,3,4,1,6,4,3};    
    Count_Sort(A , 10);

    for(int i =0; i <= 9; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}