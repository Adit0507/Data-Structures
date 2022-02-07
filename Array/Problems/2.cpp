#include "bits\stdc++.h"
using namespace std;

int main(){

    int n;
    cin >> n;
 
    int A[n];

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    if(n==1)
    {
        cout << "1" <<endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;      // mx is (A[i-1],A[i-2], A[i-3],..........A[0]) . SO IT IS FOOKIN IMPORTANT 

    for(int i = 0; i < n; i++)
    {
        // For the last element
        if(i==n-1 && A[i] > mx)
        {
            ans++;
        }

        //  For the first element
        if(i==0 && A[0] > A[1])
        {
            ans++;
        }

        // For the elements present in the middle
        if(A[i] > mx && A[i] > A[i+1])
        {
            ans++;
        }
        mx = max(mx,A[i]);
    }
    cout << ans <<endl;
    
    return 0;
}