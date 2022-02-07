#include "bits\stdc++.h"
#include <vector>
using namespace std;

int main()
{
    vector<int>v(5,10); 
    v.push_back(1);

    for(int i; i < v.size(); i++)
    {
        cout << v[i] <<endl;
    } 


    vector<int> ::iterator it;
    for(it= v.begin(); it != v.end(); it++)
    {
        cout << *it<<endl;          // it is a pointer
    } 


    for(auto element:v) 
    {
        cout << element <<endl;
    }


    v.pop_back(); // 1 2
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}