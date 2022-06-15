class Solution {
public:
    ListNode* reverse(ListNode *head)
    {
        if(head->next == NULL){
            return head;
        }
        
        ListNode *reverseHead = reverse(head->next);
        head->next-> next = head;       // head->next->next ko wapas head pe
        head-> next = NULL;             // Reverse hone ke liye head->next ko NULL hona parega
        
        return reverseHead;
    }
    
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return NULL;
        
        return reverse (head);
    }
};