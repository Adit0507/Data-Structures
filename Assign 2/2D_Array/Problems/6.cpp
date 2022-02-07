// SPIRAL ORDER MATRIX TRAVERSAL //

// Spiral order means that firstly ,  the first row is printed, then the last column is printed, then the last row is printed
// and then the first column is printed , then we will come inwards in the similar way

#include "bits\stdc++.h"
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;
 
    int A[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    // Spiral order traversal

    int row_start = 0, row_end = n-1, column_start = 0, column_end =m-1;

    while(row_start <= row_end && column_start <= column_end)
    {
        // for row_start
        for(int col = column_start; col <= column_end; col++)
        {
            cout << A[row_start][col] <<" ";
        }

        row_start++;

        // for column end
        for(int row = row_start; row <= row_end; row++)
        {
            cout << A[row][column_end] <<" ";
        }

        column_end--;

        // for row_end
        for(int col= column_end; col >= column_start; col--)
        {
            cout << A[row_end][col] <<" ";
        }
        row_end--;

        //for colum_start
        for(int row = row_end; row >=row_start; row--)
        {
            cout << A[row][column_start] << " ";
        }
        column_start++;   
    }

    return 0;
}