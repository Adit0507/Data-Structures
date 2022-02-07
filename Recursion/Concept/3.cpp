// FACTORIAL OF A NUMBER //

#include "bits\stdc++.h"
using namespace std;

int sum(int n)
{
    if(n == 0)
    {
        return 1;
    }

    int prevsum = sum(n-1);
    return n*prevsum;                 // SAARA LOGIC YAHA PAR HAI //

}

int main()
{
    int n;
    cin >> n;

    cout << sum(n) <<endl;

    return 0;
}