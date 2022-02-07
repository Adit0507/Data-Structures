// TILING PROBLEM //
// Given a "2 x n" board and tiles of size "2 x 1", count the no. of ways 
// to tile the the given board using these tiles


#include "bits\stdc++.h"
using namespace std;

int Tiling_Way(int n){

    if(n==0 || n==1)
    {
        return n;
    }
    return Tiling_Way(n-1) + Tiling_Way(n-2);
}

int main()
{
    int n;
    cin >> n;

    cout << Tiling_Way(n) <<endl;    

    return 0;
}