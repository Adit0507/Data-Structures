#include "bits\stdc++.h"
using namespace std;

void Prime_Sieve(int n)
{
    int prime[100] = {0};
    for(int i = 2; i <= n; i++)
    {
        if(prime[i]==0)
        {
            for(int j = i*i; j <= n; j+=i)    // We are incrementing by j+=i becoz we have to cross out 
            {                                // the multiples of i 
                prime[j] = 1;               
            }
        }
    }

    for(int i = 2; i <= n; i++)
    {
        if(prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout <<endl;
}

int main()
{
    int n;
    cin >> n;
    Prime_Sieve(n);

    return 0;
}










