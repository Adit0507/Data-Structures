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

void inorder(Node* root){
    if(root != NULL){
        inorder(root->l);
        cout << (root->key) << " ";
        inorder(root->r);
    }
}