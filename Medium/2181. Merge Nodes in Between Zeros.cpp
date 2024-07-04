class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode * ptr = head->next;
        ListNode * ptrprev = head;
        ListNode * ans = ptrprev;
        if(head==nullptr)return nullptr;
        int sum=0;
        while(ptr!=nullptr)
        {
            if(ptr->val==0)
            {
                ptrprev->val=sum;
                ptrprev->next=ptr->next;
                ptrprev=ptrprev->next;
                sum=0;
            }
            sum+=ptr->val;

            ptr=ptr->next;
        }
        return ans;
    }
};
