/* TARGET SUM TRIPLETS  /

 Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. 
 If there is such a triplet present in array, then print the triplet and return true. Else return false

Input: array = {12, 3, 4, 1, 6, 9}, sum = 24; 
Output: 12, 3, 9 
Explanation: There is a triplet (12, 3 and 9) present 
in the array whose sum is 24. 
Input: array = {1, 2, 3, 4, 5}, sum = 9 
Output: 5, 3, 1 
Explanation: There is a triplet (5, 3 and 1) present 
in the array whose sum is 9.

*/

#include "bits\stdc++.h"
using namespace std;

bool find3num(int A[] , int A_size , int sum)
{
    int l , r;

    // A predifined function which sorts the elements  //
    sort(A , A + A_size);

    /* Now fix the first element one by one and find the
    other two elements */
    for(int i=0; i < A_size - 2; i++)
    {
         // To find the other two elements, start two index
        // variables from two corners of the array and move
        // them toward each other

        l = i +1; // index of the first element in the remaining elements

        r = A_size - 1;
        while(l < r){
            if(A[i] + A[l] + A[r] == sum){
                cout << "Triplet is " << A[i] << " " << A[l] << " " << A[r] << " " << endl; 
                return true;
            }
                else if(A[i] + A[l] + A[r] < sum){
                    l++;
                }
            else 
                r--;
        }
    }
    return false;
}

int main()
{
    int A[] = {1 , 4 , 45, 7 ,3};
    int sum = 43;

    find3num(A , 5 , sum);
    return 0;
}


 