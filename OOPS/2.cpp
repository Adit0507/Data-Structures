#include "bits\stdc++.h"
using namespace std;

class Cat{
    public:                     // begin public section
        int GetAge();           // accessor function
        void SetAge(int age);   // accessor function
        void Meow();            // general function
    
    private:
        int itsAge;
};

// GetAge, Public Accessor function 
// returns value of itsAge member 
int Cat :: GetAge()
{
    return itsAge;
}

// definition of SetAge , public 
// accesor function 
// sets its Age number

void Cat::SetAge(int age)              
{
    // set member variable itsAge to value passed in 
    // by parameter age 
    itsAge = age;
}

// definition of Meow method 
// returns: void 
//// returns: void
// parameters: None
// action: Prints “meow” to screen

void Cat::Meow()
{
    cout << "Meow \n";
}

// create a cat , set its age, have it 
// meow , tell us its age  , then meow again

int main()
{
    Cat Mona;
    Mona.SetAge(5);
    Mona.Meow();

    cout <<"Age of my cat Mona is ";
    cout << Mona.GetAge()<<"years old \n";
    Mona.Meow();
    return 0;
}








