class Solution {
    public ListNode modifiedList(int[] nums, ListNode head) {
        Set<Integer> a = new HashSet<Integer>();
        for (int x : nums) {
            a.add(x);
        }

        while (a.contains(head.val)) {
            head = head.next;
        }

        ListNode curr = head;
        ListNode after = head;

        while (curr != null) {
            if (a.contains(curr.val)) {
                if (curr.next != null) {
                    after.next = curr.next;
                } else {
                    after.next = null;
                }
                curr = curr.next;
            } else {
                after = curr;
                curr = curr.next;
            }
        }
        return head;
    }
}
