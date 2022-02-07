// MAX. FREQUENCY OF CHARCTERS IN A STRING //

#include "bits\stdc++.h"
#include <string>
using namespace std;

int main()
{
    string A= "babushk";

    int freq[26];

    for(int i = 0; i < 26; i++)
    freq[i] = 0;

    char ans = 'a';
    for(int i = 0; i < A.size(); i++)
    freq[A[i]- 'a']++;

    int max_F = 0;
    for(int i = 0; i<26; i++)
    {
        if(freq[i] > max_F)
        {
            max_F = freq[i];
            ans = i + 'a';   // 'a' is representing 0 .
        }
    }
    
    cout << max_F << " " <<ans <<endl;

    return 0;
}