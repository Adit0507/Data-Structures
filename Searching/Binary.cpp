// ARRAY IS SORTED  //

#include "bits\stdc++.h"
using namespace std;

int BinarySearch(int A[] , int l , int r ,int key)
{
    if(l < r){

      int mid = l + (r - l)/2;         
    
    if(A[mid] == key){
        return mid;
    }
    if(key > A[mid]){
        return BinarySearch(A , mid+1 , r , key);
    }
    
    return BinarySearch(A , l , mid-1,key);
    }
    return -1;
}

int main()
{
    int A[] = {0,5,7,8,11,17};
    int key; cin >> key;
    int n = sizeof(A) / sizeof(A[0]);

    int result = BinarySearch(A , 0 , n-1 , key);
    if(result == -1){
        cout << "Not found";
    }
    else{
        cout << "Element is found "<<result;
    }

    return 0;
}