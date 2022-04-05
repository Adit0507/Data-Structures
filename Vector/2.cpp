#include "bits\stdc++.h"
#include <vector>
using namespace std;

void printVec(vector<string> &v) {
    cout << "Size: " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector <string> v;
    int n; 
    cin >> n;

    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        v.push_back(s);
    }
    printVec(v);

    return 0;
}