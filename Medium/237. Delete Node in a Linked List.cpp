// A more Optimized approach would be to move the data from next element to node and then make the node point to next of next element
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* ptr = node;
        ListNode* prev = node;
        while(ptr->next!=NULL)
        {
            ptr->val = (ptr->next)->val;
            ptr = ptr->next;
            if((ptr->next)!=NULL)
            {
                prev=ptr;
            }
            else
            {
                prev->next=NULL;
            }
        }
    }
};
