// GENERATE ALL SUBSTRINGS OF A STRING //

#include "bits\stdc++.h"
using namespace std;

void subseq(string A , string ans)
{
    if(A.length() == 0)
    {                                   // Base Case
        cout << ans << endl;
        return;
    }
    char ch = A[0];                     // Pehla character nikal lenge
    string ros = A.substr(1);

    subseq(ros , ans);
    subseq(ros , ans + ch);
}

int main()
{
    subseq("JANINE" , "");
    cout << endl; 

    return 0;
}