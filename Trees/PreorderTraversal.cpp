#include "bits\stdc++.h"
using namespace std;

struct Node{
    int key;
    Node* l;
    Node* r;
    Node(int k){
        key = k;
        l = r = NULL;
    }
};      

void preorder(Node* root){
    if(root != NULL){
        cout << root->key << " ";
        preorder(root->l);
        preorder(root->r);
    }
}