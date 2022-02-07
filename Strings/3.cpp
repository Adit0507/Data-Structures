#include "bits\stdc++.h"
#include <string>
using namespace std;

int main()
{
    string A= "abcdefghijklmnopqrstvuw";
    string B= "GEYEUY849WQ4I4";
    string C= "Snow";
    string D= "928307";
    string E ="kawfhlewfwruuiwsxvlh";


    A.erase(1,6);             // A.erase(a,b)   a= index from where we have to erase elements 
                             //                 b = No. of elements we have to erase
    cout << A <<endl;
    cout <<"\n";

    cout << B.find("UY849") <<endl;
    cout <<"\n";

    cout << C.insert(4,"child") <<endl; // insert(a,"b") = a is the index from where we have to start and b is the string
    cout <<"\n";

    cout << stoi(D) + 150 <<endl;        // stoi() takes string as an arguement and returns its value
    cout <<"\n";

    sort(E.begin(),E.end());
    cout << E <<endl;

    return 0;                           
}