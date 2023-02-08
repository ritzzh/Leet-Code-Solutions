/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr)
        {
            return head;
        }
        ListNode *ptr = head;
        int count=0;
        while(ptr!=nullptr)
        {
            ptr=ptr->next;
            count++;
        }
        count = (count/2) + 1;
        int scount=0;
        ptr=head;
        while(ptr!=nullptr)
        {
            if(scount==count-1)
            {
                return ptr;
            }
            ptr=ptr->next;
            scount++;
            
        }
        return ptr;
    }
};
