// SOLUTION  //

#include "bits\stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i =0; i < n; i++)
    {
        cin >> A[i];
    }

    int ans = 2;  // MAX. ARTHIMETIC SUBARRAY LENGTH //
    int pd = A[1] - A[0];
    int j = 2;
    int curr = 2;

    while(j < n)
    {
        if(pd == A[j] - A[j-1])
        {
            curr++;             // Increase current ans by 1.
        }
        else{
            pd = A[j] - A[j-1];
            curr = 2;               // We are updating current ans to 2 becoz every subarray of size 2 is an arthimetic subarray .
        }
        ans = max(ans , curr);
        j++;
    }
    cout << ans <<endl;
    
    return 0;
}