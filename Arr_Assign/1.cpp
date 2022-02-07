#include "bits\stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(A[i]==A[j])
            {
                cout << A[i] << " " << i;
                return 0;
            }
            cout << "No repeating element";

    return 0;
}