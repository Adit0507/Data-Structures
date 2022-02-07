// REVERSE STRING USING RECURSION

#include "bits\stdc++.h"
using namespace std;

void Reverse(string A)
{
    if(A.length() == 0)
    {
        return;                   // Base Case
    }

    string ros = A.substr(1);   // By using substr(1) 1st index ke baad wali string "ros" mein store hojaygi  
    Reverse(ros);               // Reverse() is a pre defined function . 

    cout << A[0];
}


int main()
{
    Reverse("BINOD");

    return 0;
}