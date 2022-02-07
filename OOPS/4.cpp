// MULTI LEVEL INHERTIANCE //

#include "bits\stdc++.h"
using namespace std;

class A{
public:
    void Afunc(){
        cout << "Func A\n"<<endl;
    }
};

class B : public A{
public:
        void bfunc()
        {
            cout <<"Func B \n"<<endl;
        }
};

class C : public B{
public:
};

int main()
{
    C c;
    c.Afunc();
    c.bfunc();

    return 0;
}