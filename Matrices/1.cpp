// DIAGONAL MATRIX

#include "bits\stdc++.h"
using namespace std;

class Diagonal{

    private: 
        int *A , n;

    public:
        Diagonal(){              // JUST FOR INITIALIZATION
            
            n = 2;
            A = new int[2];
        }

        Diagonal(int n){         // ENTERING VALUE

            this ->n = n;
            A = new int [n];
        }
        ~Diagonal()
        {
            delete[] A;
        }

        void Set(int i , int j , int x);    // x is the element that I want to set
        int Get(int i , int j);
        void Display();
};


void Diagonal :: Set(int i , int j , int x)
{
    if(i == j)
        A[i-1] = x;
}

int Diagonal :: Get(int i , int j)
{
    if(i == j)
        return A[i-1];

    return 0;
}

void Diagonal :: Display(){
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++)
            if(i == j)
                cout << A[i] << " ";
            else
                cout << "0 ";
        cout<< endl;
    }
}

int main()
{
    Diagonal D(4);
    D.Set(1 , 1 , 4);
    D.Set(2 , 2 , 9);
    D.Set(3 , 3 , 5);
    D.Set(4 , 4 , 1);

    D.Display();
    return 0;
}

