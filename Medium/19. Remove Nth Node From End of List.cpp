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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return head;
        }

        if (head->next == NULL && n == 1){
            return NULL;
        }

        ListNode* trav = head;
        int x = 1;
        while (trav->next != nullptr) {
            x++;
            trav = trav->next;
        }

        ListNode* ptr = head;
        int i = 1;

        if(x==n)
        {
            head=head->next;
            return head;
        }

        while (ptr != nullptr) {
            if (i == x - n) {
                ptr->next = (ptr->next)->next;
            }
            ptr = ptr->next;
            i++;
        }
        return head;
    }
};
