// FORM THE BIGGEST NO. FROM A NUMERIC ARRAY //

#include "bits\stdc++.h"
#include <string>
using namespace std;

int main()
{
    string A= "694871719258147";

    sort(A.begin() , A.end() , greater<int>());
    cout << A <<endl;

    return 0;
}