// MAX. CIRCULAR SUBARRAY SUM //

#include <iostream>
#include <climits>
using namespace std;

int kadane(int A[],int n)
{
    int currSum= 0;
    int MaxSum=INT_MIN;
    for(int i=0; i<n; i++)                     // SAARA KADANE KA KAAM FUNCTION ME
    {                                         // CONVERT KARDIYA HAI .
        currSum+=A[i];
        if(currSum<0)
        {
            currSum = 0;
        }
        MaxSum =max(currSum,MaxSum);
    }
    return MaxSum;
}

int main()
{
    int n;
    cout <<"Enter n:" <<endl;
    cin >>n;
    
    int A[n];
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(A,n);
    int totalSum = 0;
    for(int i=0; i<n; i++)
    {
        A[i]= -A[i] ;  //By reversing the signs of all elements we will get the non contributing elements as the max. value then 
    }                 // is the non contributing element .

    wrapsum = totalSum + kadane(A,n);  //Max. sum =  Total Sum of Array - (-Sum of non contributing elements)
 
    cout << max(wrapsum,nonwrapsum);
    return 0;

}