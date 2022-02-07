// ALL POSSIBLE PERMUTATIONS OF A STRING //

#include "bits\stdc++.h"
using namespace std;

void Permutation(string A , string ans)
{
    if(A.length() == 0)
    {
        cout << ans <<endl;
        return;
    }

    for(int i=0; i < A.length(); i++)
    {
        char ch = A[i];
        string ros =  A.substr(0,i)  +   A.substr(i+1);
            // (0 ,i) denotes the string before the i'th character.
           // (i + 1) here is the starting point .

           Permutation(ros , ans + ch);
    }
}


int main()
{
    Permutation("ABC", " ");

    return 0;
}