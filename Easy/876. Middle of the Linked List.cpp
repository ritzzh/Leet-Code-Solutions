class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode ptr = head;
        ListNode ptrn = head;

        while(ptrn.next!=null)
        {
            ptr = ptr.next;
            if(ptrn.next.next!=null)
            {
                ptrn = (ptrn.next).next;
            }
            else{
                return ptr;
            }
        }
        return ptr;
    }
}
