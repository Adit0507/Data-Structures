//SUM OF ALL SUBARRAYS //

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter n " <<endl ;
    cin >> n;
                                      
    int A[n] ;
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    int curr = 0;

    for(int i=0; i<n; i++)
    {
        curr=0;
        for(int j=i; j<n; j++)
        {
            curr+=A[j];
            cout << curr<<endl ;
        }
    }
    return 0;
}