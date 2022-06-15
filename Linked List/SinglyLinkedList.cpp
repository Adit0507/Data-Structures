#include "bits\stdc++.h"
using namespace std;

struct Node {
    int data;           // 4 bytes
    struct Node *next;  // 4 bytes      Node pointing to next node
};

void print(struct Node *ptr){   // Print function
    cout << "List: " << endl;
    
    while(ptr != NULL){             // while loop is being used coz we can add as many Nodes we want
        cout << ptr->data << "->";
        ptr = ptr->next;            // Pointing to the next node
    }
    cout << "NULL" << endl;
}

int main(){

    int n, element;

    // Memorty allocation
    struct Node *head = new Node;  // new operator allocates space in Heap memory 
    struct Node *ptr  =  new Node;
    struct Node *q = new Node;

    cout << "Enter number of Nodes: " << endl;
    cin >> n;

    cout << "Enter elements: " << endl;
    cin >> element;

    q ->data = element;
    q-> next = NULL;
    head = q;
    ptr = head;

    for(int i = 1; i < n; i++){
        cin >> element;

        struct Node *q = new Node;
        q ->data = element;
        q ->next = NULL;

        ptr-> next = q;
        ptr = ptr->next; 
    }

    ptr = head;
    print(ptr);

    return 0;
}