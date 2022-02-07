// Max till i //
// ( We have to iterate over the array to give the max. no.)

#include "bits\stdc++.h"
using namespace std;

int main()
{
    int mx = -19999999;
    int n;
    cin >> n;
    
    int A[n];
    for(int i=0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i=0; i <n; i++)
    {
        mx = max(mx , A[i]);
        cout << mx <<endl;
    }
    return 0;
}
