// COUNT THE NO. OF PATHS POSSIBLE FROM START TO END POINT IN GAMEBOARD //
// (The Gameboard is just an array)

#include "bits\stdc++.h"
using namespace std;

int count_Path(int s , int e)
{
    if(s == e)
    {
        return 1;
    }

    if(s > e)
    {                                       
        return 0;
    }

    int count = 0;
    for(int i=1; i<6; i++)
    {
    count +=count_Path(s+i , e);
    }
    return count; 
}

int main()
{
    cout << count_Path(0,3) <<endl; // (0 , 3) 0 = Starting point and 3 = Ending point
    return 0;
}