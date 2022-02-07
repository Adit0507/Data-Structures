// MOVE ALL THE x TO THE END OF THE STRING //

#include "bits\stdc++.h"
using namespace std;

string Moveall_x(string S)
{
    if(S.length() == 0)
    {
        return "";
    }

    char ch = S[0];
    string ans = Moveall_x(S.substr(1)); 

    if(ch == 'x')
    {
        return ans + ch; // We will get 'x' in the end here 
    }
    return ch + ans; // The word wil be as it is 
}

int main()
{
    cout << Moveall_x("BlondexFRANKXxOCEAN");

    return 0;
}