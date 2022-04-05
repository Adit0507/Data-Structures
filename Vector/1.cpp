#include "bits\stdc++.h"
#include <vector>
using namespace std;

void printVec(vector<int> &v) {
    cout << "Size: " << v.size() << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}

int main(){ 
    vector<int> v;
    v.push_back(9);     // Pushes the element at the back 
    v.push_back(4);

    vector<int> &v2 = v;  // O(n) Copies the vector  
    v2.push_back(5);

    printVec(v);
    printVec(v2);
    return 0;
}