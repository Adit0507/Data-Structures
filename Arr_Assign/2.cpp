#include "bits\stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i=0; i < n; i++){
        cin >> A[i];
    }

    int ans = 0;
    int mx = -1;  // mx is A[i-1] , A[i-2] , A[i-3]...... A[0]

    for(int i=0; i<n; i++){
        if(A[0] > A[1]){
            ans++;
        }
        if(i== n-1 && A[i] > mx){
            ans ++;
        }
        if(A[i] > mx && A[i] > A[i+1]){
            ans++;
        }
        mx = max(ans, A[i]);
    }
    cout << ans << endl;

    return 0;
}