// UPPERCASE TO LOWER CASE AND VICE VERSA .//

#include "bits\stdc++.h"
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    
    string A ="uqrhqeoivzjsan";

    transform(A.begin() , A.end() , A.begin() , ::toupper);       //toupper changes the lowercase characters into uppercase
    cout << A <<endl;

    string B = "BEYRTAPOQ";
    transform(B.begin() , B.end() , B.begin() , ::tolower);     //tolower changes the uppercase characters into lowercase
    cout << B <<endl;

/*********************************************************************************************************/

    string C = "jgbrghNOIHt " ;
    string D = " JGTTTPWLKEIOI" ;
    
    // convert into uppercase 
    for(int i=0 ; i < C.size() ; i++)
    {
        if(C [i] >= 'a' && C [i] <='z')
        {
            C [i] -= 32 ;                 // Because the ASCII value diff. b/w 'a' - 'A' is 32 ie the diff. b/w lowercase and uppercase
        }
    }
    cout << C << endl ;

    // convert into lowercase 
    for(int i=0 ; i < D.size() ; i++)
    {
        if(D [i] >= 'A'  &&  D[i] <= 'Z') 
        {
            D[i] +=32 ;
        }
    }  
    cout << D << endl ;
    
    return 0;
}