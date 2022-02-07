// COMBINATION FORMULA

#include "bits\stdc++.h"
using namespace std;

int fact(int n){

    if(n == 0 || n==1){
        return 1;
    }

    return n* fact(n-1);
}

int nCr(int n , int r)
{
    if(n == 0 || r == 0){                   
        return 1;                                        // ANOTHER METHOD                   
    }
    int num = fact(n);                                    // return nCr(n-1 , r-1) + nCr(n-1 , r)
    int den = fact(r) * fact(n-r);

    return num/den;

}
int main()
{
    int n , r; cin >> n >> r;

    cout << nCr(n , r) << " ";
    return 0;
}