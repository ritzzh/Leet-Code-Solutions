class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack <int> a;
        ListNode * ptr = head;
        while(ptr)
        {
            a.push(ptr->val);
            ptr = ptr->next;
        }
        ptr = head;
        while(ptr && ptr->val == a.top()){
            a.pop();
            ptr = ptr->next;
        }
        return ptr == nullptr;
    }
};
