// SWAPPING APPROACH TO DELETE NODE FROM A LINKED LIST
// Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.

// It is guaranteed that the node to be deleted is not a tail node in the list.

class Solution {
public:
    void deleteNode(ListNode* node) {
        
        if(node->next == NULL)  // Checking if the node is last or not
            delete node;
        
        //         
        swap(node->val, node->next-> val);
        ListNode *temp = node ->next;   // Node which is to be deleted
        node->next = node->next->next;  // temp-> next can also be written
        delete temp;
    }
};