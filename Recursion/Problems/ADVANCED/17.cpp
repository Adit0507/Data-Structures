// TAYLOR SERIES  

#include "bits\stdc++.h"
using namespace std;

double e(int x, int n)
{
    static double p=1,f=1;
    double r;
 
    if(n==0)
    return 1;
    
    r = e(x , n-1);
    p = p * x;
    f = f * n;
    return r + p / f;
    
}
int main()
{
    int n , x;
    cin >> n >> x;

    cout << e(n , x);

    return 0;
}
