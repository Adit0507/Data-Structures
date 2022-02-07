 // 2D ARRAY (BASIC)
 
#include <iostream>
using namespace std;

int main()
{
    int n , m;         // n= No. of Rows ,  m = No. of Columns
    cin >> n >>m;

    int A[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> A[i][j];
        }
    }

    cout <<"Matrix is \n" <<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << A[i][j]  <<" ";
        }
        cout <<"\n";
    }
     
    return 0;
}