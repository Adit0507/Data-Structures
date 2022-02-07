// PRINT THE nth FIBONACCI NUMBER //

#include "bits\stdc++.h"
using namespace std;

int Fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }

    return Fib(n-1) + Fib(n-2); 
}

int main()
{
    int n;
    cin >> n;

    cout << Fib(n) <<endl;
    return 0;
}