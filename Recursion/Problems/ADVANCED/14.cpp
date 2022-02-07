// FRIENDS  PAIRING PROBLEM //
// Find the no. of ways in which n friends /
// can remain single or be paired up // 

#include "bits\stdc++.h"
using namespace std;

int Friend_Pairing(int n){

    if(n==0 || n==1 || n==2)
    {
        return n;
    }

    return Friend_Pairing(n-1) + Friend_Pairing(n-2)*(n-1);
}

int main(){
    
    int n;
    cin >> n;

    cout << Friend_Pairing(n) << endl;

    return 0;
}