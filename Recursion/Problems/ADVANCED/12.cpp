// COUNT THE NO. OF POSSIBLE PATHS IN A MAZE //
// ( BOX WALA MAZE)

#include "bits\stdc++.h"
using namespace std;

int count_Maze(int n , int m , int i , int j)
{
    if(i == n-1 && j==m-1)
    {
        return 1;                       // Base Case
    }
    if(i >= n || j >=m)
    {
        return 0;
    }

    return count_Maze(n , m, i+1 , j) + count_Maze(n , m , i , j+1);     // ALL THE POSSIBLE PATHS //
                                                                        // (Horizontal and Vertical directions)                                                           
}

int main()
{
    cout << count_Maze(3 , 4, 0 , 0) <<endl;
    return 0;
}