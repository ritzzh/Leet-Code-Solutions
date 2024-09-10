class Solution {
    public ListNode insertGreatestCommonDivisors(ListNode head) {

        if(head==null) return head;
        if(head.next==null)
        {
            return head;
        }
        ListNode prev = null;
        ListNode ptr = head;
        

        while(ptr.next!=null)
        {
            int t = gcd(ptr.val,ptr.next.val);
            ListNode temp = new ListNode(t,ptr.next);
            ptr.next=temp;
            ptr=ptr.next.next;
        }

        return head;
    }
    public int gcd(int a, int b) {
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        if (a == b)
            return a;

        if (a > b)
            return gcd(a - b, b);
        return gcd(a, b - a);
    }
}
