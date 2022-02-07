// SUB ARRAY WITH GIVEN SUM 

#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n , s ;
    cin >> n >> s;       // n = No. of elements
                   
    int A[n];
    for(int i=0; i < n; i++)
    {
        cin >> A[i];
    }

    int i = 0, j = 0 , st = 0 , en = 1 , sum =0;  // 'sum' stores the sum from i and j

    while(j < n && sum +  A[j] <= s) 
    {
        sum += A[j];
        j++;    
    }
     
    if(sum == s)
    {
        cout << i+1 <<" " <<j <<endl;    // i+1 because we have to input from index 1 
        return 0;
    }

    while (j < n)
    {
        sum += A[j];
        while(sum > s)
        {
            sum -= A[i];
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
    
    cout << st << " " << en <<endl;

    return 0;
}