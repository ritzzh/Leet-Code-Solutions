class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
      ListNode * stail = list2;
      ListNode * fhead = list1;
      ListNode * join;
      ListNode * end;
      int count =0;

      while(stail->next!=NULL)
      {
        stail = stail->next;
      }
      
      while(fhead!=NULL)
      {
        if(count==(a-1))
        {
            join=fhead;
        }
        if(count==(b+1))
        {
            end = fhead;
            break;
        }
        fhead = fhead->next;
        count++;
      }
      join->next = list2;
      stail->next = end;

      return list1;
    }
};
