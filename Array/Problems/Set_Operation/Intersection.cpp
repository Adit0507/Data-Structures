#include "bits\stdc++.h"
using namespace std;

void PrintIntersection(int A1[] , int A2[] , int m , int n)
{
    int i=0 , j=0;
    while(i < m && j < n)
    {
        if(A1[i] > A2[j])
        j++;

        else if(A2[j] > A1[i])
        i++;

        else{     // A1[i] == A2[j] 
            cout << A2[j] << " ";
            i++;
            j++;
        }
    }
}



int main()
{
    int A1[] = {4,9,5};
    int A2[] = {9,4,9,8,4};

    int m = sizeof(A1)/sizeof(A1[0]);
    int n = sizeof(A2)/sizeof(A2[0]);

    PrintIntersection(A1 , A2 , m , n);

    return 0;
}

