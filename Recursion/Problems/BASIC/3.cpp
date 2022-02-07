// REPLACE pi with 3.14 in string //

#include "bits\stdc++.h"
using namespace std;

void Replace_Pi(string A)
{
    if(A.length() == 0)  // Chalte chalte string size 0 hojayega tab
    {                   
        return;         // BASE CASE 
    }

    if(A[0] == 'p' && A[1] == 'i')
    {
        cout << "3.14" << endl;
        Replace_Pi(A.substr(2));
    }
    else{
        cout << A[0];
        Replace_Pi(A.substr(1));
    }

}

int main()
{
    Replace_Pi("rgerpipipipiqpi3.14");

    return 0;
}