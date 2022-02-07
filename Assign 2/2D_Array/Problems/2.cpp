//SEARCHING IN A MATRIX //

// LINEAR SEARCH 

#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int A[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> A[i][j];
        }               
    }                                              

    cout <<"Matrix is :\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)                        //TIME COMPLEXITY = 0(nm)
        {
            cout << A[i][j] <<" ";
        }
        cout <<"\n";
    }

    int x;
    cin >> x;

    bool flag = false;      //We are just initalizing it with false 
                            // Dont think too much about this
    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(A[i][j]==x)
            {
                cout << i <<" " << j << endl;
                flag = true;
            }
        }
    }

    if(flag)
    {
        cout <<"Element is found \n :"<<endl;
    }

    else{
        cout <<"Its not there";
    }

    return 0;
}