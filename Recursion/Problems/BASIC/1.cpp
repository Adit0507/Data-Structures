// FIRST AND LAST OCCURENCE OF A NUMBER IN AN ARRAY

#include "bits\stdc++.h"
using namespace std;

int FirstOcc(int A[] , int n , int i , int key)         // i stores the position
{
    if(i == n)        // MATLAB KI LAST ELEMENT PAR PAHUCH GAYE
    {
        return -1;                          // We didnt find the key so -1 got returned .
    }

    if(A[i] == key)
    {
        return i;
    }
    return FirstOcc(A , n , i+1 , key);         // If the above condition is not satisfied we call the rest of the array 
}                                               // DHYAAN SE DEKHO "i + 1" hai MATLAB KI AGLI POSITION PAR CHALA JAAYEGA


int LastOcc(int A[] , int n , int i , int key)
{
    int Rest_Array = LastOcc(A , n , i+1 ,key);             
    if(Rest_Array != -1)                        // NOT EQUAL TO -1 .
    {
        return Rest_Array;
    }
     
    if(A[i] == key)
    {
        return i;
    }
    return -1;  // We didnt find the key .
}

int main()
{
    int A[] = {4,2,1,2,5,2,7};
    cout << FirstOcc(A , 7 , 0 , 2) << endl;

    cout << LastOcc(A ,7 , 0 , 2) <<endl;

    return 0;
}







