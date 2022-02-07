// RAT IN A MAZE //

#include "bits\stdc++.h"
using namespace std;

bool isSafe(int **A ,int x,int y , int n)
{
    if(x < n && y < n && A[x][y] ==1){
        return true;
    }
    return false;
}

bool RatinMaze(int **A ,int x ,int y , int n , int **solA)
{
    if(x == (n-1) && y == (n-1)){
        solA[x][y] = 1;
        return true;
    }
    if(isSafe(A,x,y,n)){
        solA[x][y] = 1;
        
        if(RatinMaze(A, x + 1 ,y ,n , solA)){
            return true;
        }
        if(RatinMaze(A ,x , y + 1 ,n , solA)){
            return true;
        }

        solA[x][y] = 0; // Backtracking
        return false;
    }
    return false;

}


int main()
{
    int n;
    cin >> n;

    int **A = new int*[n];
    for(int i = 0; i < n; i++)
    {
        A[i] = new int[n];
    }

     for(int i= 0; i < n; i++)
    {
       for(int j = 0; j < n; j++)
       {
           cin >> A[i][j];
       }
    }

    int **solA = new int*[n];
    for(int i =0; i < n; i++)
    {
        solA[i] = new int[n];
        for(int j=0; j < n; j++){
            solA[i][j] = 0; 
        }
    }

    if(RatinMaze(A , 0 , 0 , n , solA)){
        for(int i=0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << solA[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}


// 1 0 1 0 1                                        
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1
