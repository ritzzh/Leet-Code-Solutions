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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr1=list1;
        ListNode* ptr2= list2;
        int count=0;
        if(list1==nullptr)
        {
            if(list2==nullptr)
                return nullptr;
            else
            {
                return list2;
            }
        }
        while(ptr1->next!=nullptr)
        {
            count++;
            ptr1=ptr1->next;
        }
        ptr1->next = ptr2;
        ptr1=list1;
        while(count>=0)
        {
            while(ptr1->next!=nullptr)
            {
                if((ptr1->next)->val<ptr1->val)
                {
                    int temp = (ptr1->next)->val;
                    (ptr1->next)->val = ptr1->val;
                    ptr1->val=temp;
                }
                ptr1=ptr1->next;
            }
            count--;
            ptr1=list1;
        }
        
        return list1;
    }
};
