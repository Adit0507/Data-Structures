// FINDING DUPLICATES IN A STRING

// USING HASHTABLE (FOR BOTH UPPERCASE AND LOWERCASE LETTERS)

// NOT WORKING

#include "bits\stdc++.h"
using namespace std;

int main()
{
    char A[] = "ADITYAnan";
    int H[52] = {0} , i;

    for(i = 0; A[i] != '\0'; i++){
        if(A[i] >= 'A' && A[i] <= 'Z')
            H[A[i] - 65] ++;
        
        else    
            H[A[i] - 97+ 26];
    }

    for(i=0; i < 52; i++)
    {
        if(H[i]>1)
            {
            if(i<=26)
            cout<<(char)(i+65)<<" "<<H[i]<<" times"<<endl;
            else
            cout<<(char)(i+97-26)<<" "<<H[i]<<" times"<<endl;
            }  
    }
    
return 0;
}
 