// SINGLE INHERITANCE //

#include "bits\stdc++.h"
using namespace std;

class A
{
    public:
        void func()
        {
            cout << "Inherited";
        }
};

class B : public A{
};

int main()
{
    B a;
    a.func();

    return 0;
}
