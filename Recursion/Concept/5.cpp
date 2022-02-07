// CHECK IF AN ARRAY IS SORTED OR NOT //

// Strictly Increasing //

#include "bits\stdc++.h"
using namespace std;

bool sorted(int A[] , int n)
{
    if(n == 1)
    {
        return true;
    }

    bool rest_array = sorted(A , n-1);           // checking if rest of then array is sorted or not
    return(A[0] < A[1] && rest_array);                                             
}                                                         

int main()
{
    int A[] = {1,2,4,5};
    cout << sorted(A , 5) << endl;

    return 0;
}