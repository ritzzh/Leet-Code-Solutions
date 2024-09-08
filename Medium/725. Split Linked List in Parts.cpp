class Solution {
    public ListNode[] splitListToParts(ListNode head, int k) {
        ListNode ptr = head;
        ListNode[] fin = new ListNode[k];

        int count = 0;
        while (ptr != null) {
            ptr = ptr.next;
            count++;
        }
        int div = count / k; // number of element in each group
        int rem = count % k; // the extra elements left

        ptr = head;
        ListNode prev = null;
        
        for(int i=0;i<k;i++)
        {
            fin[i] = ptr;
            for(int j = 1; j <= div+(rem>0?1:0);j++){
                prev=ptr;
                if(ptr==null)
                    break;
                ptr = ptr.next;
            }
            if(prev!=null)
            prev.next = null;
            rem--;
        }
        return fin;
    }
}
