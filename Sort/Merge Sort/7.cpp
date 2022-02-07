// COUNT INVERSIONS //

// 2 elements A[i] and A[j] form an inversion if 
// A[i] > A[j] and i < j

#include "bits\stdc++.h"
using namespace std;

long long merge(int A[] , int l , int mid , int r)
{
    long long inv = 0;
    int n1 = mid -l+1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for(int i=0; i < n1; i++)
    {
        a[i] = A[l+i];
    }

     for(int i=0; i < n2; i++)
    {
        b[i] = A[mid+1+i];
    }
    int i=0, j=0 , k=1;
    while(i < n1 and j< n2)
    {
        if(A[i] <=b[j])
        {
            A[k] = a[i];
            k++; i++;
        }
        else{
            A[k] = b[j];
            inv += n1 - i;
            k++; j++;
        }
    }
    while(i<n1)
    {
        A[k] = a[i];
        k++; i++;
    }
    while (j<n2)
    {
        A[k] = b[j];
        k++; j++;
    }
    return 0;
}

long long Merge_Sort(int A[] , int l ,int r)
{
    long long inv = 0;
    if(l < r)
    {
        int mid = (l+r)/2;
        inv += Merge_Sort(A, l , mid);
        inv += Merge_Sort(A, mid+1 , r);
        inv += merge(A , l , mid , r);
    }
    return 0;
}

int main()
{
    int A[7] ={12,5,1,7,3,6,9};

    cout << Merge_Sort(A, 0 , 6);

    return 0;
}