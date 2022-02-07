// MAX SUBARRAY SUM (KADANE ALGORITHM) //

#include <iostream>
#include <climits>
using namespace std;


int main()
{
    int n;
    cout <<"Enter n :"<<endl;
    cin >>n;

    int A[n];
    for(int i=0; i<n; i++)
    {
        cin >>A[i];
    }

    int currSum = 0;
    int MaxSum = INT_MIN;  // INT_MIN ka doubt
                                            // Array has to be traversed only once in this method //
                                           // Time Complexity = O(n)  
    for(int i=0; i<n; i++)
    {
        currSum +=A[i];
        if(currSum<0)
        {
            currSum=0;
        }
        MaxSum = max(MaxSum,currSum);
    }
     
    cout <<MaxSum<<endl;
    return 0; 
}