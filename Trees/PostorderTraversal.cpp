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

void postorder(Node* root){
    if(root != NULL){
        postorder(root->l);
        postorder(root->r);
        cout << root->key;
    }
}