// SMALLLEST MISSING +ve NUMBER

#include "bits\stdc++.h"
using namespace std;

int main()
{
    int n; cin >> n;
    int A[n];

    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    const int N = 1e6;
    bool check[N];
    for(int i=0; i < N; i++)
    {
        check[i] = false;
    }
    for(int i=0; i < n; i++)
    {
        if(A[i] >= 0)
        {
            check[A[i]] = true;
        }
    }

    int ans = -1;
    for(int i=1; i < N; i++)
    {
        if(check[i] == false)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}