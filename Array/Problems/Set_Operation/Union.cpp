// ARRAYS HAVE TO BE SORTED 

#include "bits\stdc++.h"
using namespace std;

// m is the number of elements in arr1[]
//  n is the number of elements in arr2[] 
void PrintUnion(int A1[] , int A2[] , int m , int n)
{ 
    int i=0, j=0;
    while(i < m && j < n)
    {
        if(A1[i] < A2[j])
        cout << A1[i++] << " ";
    
        else if(A1[i] > A2[j])
        cout << A2[j++] << " ";

        else 
        {
            cout << A2[j++] << " ";
            i++;
        }
    }

    while(i < m)
    cout << A1[i++] << " ";
    while(j < n)
    cout << A2[j++] << " ";
}
int main()
{
    int A1[] = {1 , 2 , 4 , 9};
    int A2[] = {2 , 3 , 4 , 5 , 6 , 7};

    int m = sizeof(A1)/sizeof(A1[0]);
    int n = sizeof(A2)/sizeof(A2[0]);

    PrintUnion(A1 , A2 , m , n);

    return 0;
}

 