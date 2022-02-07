// PRINT ALL POSSIBLE WORDS FROM PHONE DIGITS //
// (Think of the keypad of Nokia 3310)

#include "bits\stdc++.h"
using namespace std;

string keypadA[] = {"" , "", "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};

void keypad(string A , string ans)
{
    if(A.length() == 0)
    {
        cout << ans <<endl;
        return;
    }

    char ch = A[0];
    string code = keypadA[ch - '0'];
    string ros = A.substr(1);

    for(int i = 0; i < code.length(); i++)
    {
        keypad(ros , ans + code[i]);
    }
}

int main()
{
    keypad("23", "");

    return 0;
}