//BruteForce
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        map<int, int> a;
        bool check = false;
        int count = 0;

        if (head == NULL) {
            return false;
        }
        if (head->next == NULL) {
            return false;
        }
        ListNode * ptr = head;
        while (head->next != NULL) {
            a[head->val]++;
            if(a[head->val]>1)
            {
                count++;
            }
            if(count>10000)
            {
                return true;
            }

            head = head->next;
        }
        return check;
    }
};

// Optimized
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
        {
            return false;
        }
        ListNode * slow = head;
        ListNode * fast = head;

        while((fast->next)->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow==fast)
            {
                return true;
            }
            if(fast->next==NULL)
            {
                return false;
            }
        }
        return false;
    }
};
