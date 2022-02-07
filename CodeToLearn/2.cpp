// subarray with given sum  

#include "bits\stdc++.h"
using namespace std;

int main()
{
    int n, s;  cin >> n >> s;

    int A[n];
    for(int i=0; i < n; i++)
    {
        cin >> A[i];
    }

    int i=0 , j = 0 , st = 0 , en = 1 , sum=0;
    while(j < n && sum + A[j] < s)
    {
        sum += A[j];
        j++;
    }

    if(sum == s)
    {
        cout << i+1 << " " <<j << endl;
    }

    while(j < n)
    {
        sum +=A[j];
        while(s < sum)
        {
            sum -=A[i];
            i++;
        }
        if(sum == s)
        {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout << st << " "<< en << endl;

    return 0;
}
    



