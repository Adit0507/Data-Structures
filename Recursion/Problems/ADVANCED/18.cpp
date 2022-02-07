/* TAYLOR SERIES USING HORNER'S RULE 

    PROBLEM WITH THE OUTPUT
*/

#include "bits\stdc++.h"
using namespace std;

double e(int x , int n){
    static double s;

    if(n == 0)  
        return s;

    s = 1 + x*s/n;

    return e(x , n-1);
}

int main()
{
    int n , x;
    cin >> n >> x;

    cout << e(n,x) << " ";

    return 0;
}