// N QUEEN PROBLEM //

// The N Queen is the problem of placing N chess queens 
// on a N×N chessboard so that no two queens attack each other

#include "bits\stdc++.h"
using namespace std;

bool isSafe(int **A , int x, int y , int n){

    for(int row = 0; row < x; row++){               
        if(A[row][y] == 1){             // This is for checking if there is any Queen
            return false;              // in the Column and if we found one "return false"
        }
    }

    int row = x;
    int col = y;
    while (row >=0 && col >=0)
    {
        if(A[row][col] == 1){
            return false;                   // LEFT DIAGONAL
        }
        row --;
        col --;
    }

    row = x;
    col = y;  
    while (row >=0 && col <=n)              // RIGHT DIAGONAL //
    {
        if(A[row][col] == 1){
            return false;
        }
        row --;
        col ++;
    }
    
    return true;
}

    bool nQueen(int **A , int x , int n) {            // We wont be using y here kyunki kaam ab bas row ka hai

        if(x >= n)
        {
        return true;
        }
        
        for(int col = 0; col < n; col++){
            if(isSafe(A , x , col , n)){
                A[x][col] = 1;

                if(nQueen(A , x+1 , n)){
                    return true;
                }
                A[x][col] = 0;                      // BACK TRACKING
            }
        }

        return false;
    }        
                                            

int main()
{
    int n;
    cin >> n;

    int **A = new int *[n];
    for(int i = 0; i < n; i++){
        A[i]= new int[n];
        for(int j = 0; j < n; j++){
            A[i][j] = 0;
        }
    }

    if(nQueen(A , 0 , n)){
        for(int i = 0; i < n; i++)
        {
        for(int j = 0; j < n; j++)
            {
            cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}