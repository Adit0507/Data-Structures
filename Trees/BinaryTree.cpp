#include "bits\stdc++.h"
using namespace std;

struct Node{
    int key;
    Node* l; // Left child
    Node* r; // right child
    Node(int k){
        key = k;
        l = r = NULL;
    }
};
    
int main(){ 
    Node* root = new Node(10);
    root->l = new Node(20);
    root->r = new Node(30);
    root ->l ->l = new Node(40);
    return 0;
}