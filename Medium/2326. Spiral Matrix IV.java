class Solution {
    public int[][] spiralMatrix(int m, int n, ListNode head) {
        int[][] ans = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = -1;
            }
        }
        int toprow = 0, bottomrow = m-1, leftcol = 0, rightcol = n-1;
        ListNode ptr = head;
        while (ptr != null) {
            for(int i=leftcol;i<=rightcol && ptr!=null;i++)
            {
                ans[toprow][i] = ptr.val;
                ptr = ptr.next;
            }
            toprow++;
            for(int i=toprow;i<=bottomrow && ptr!=null;i++)
            {
                ans[i][rightcol] = ptr.val;
                ptr = ptr.next;
            }
            rightcol--;
            for(int i=rightcol;i>=leftcol && ptr!=null;i--)
            {
                ans[bottomrow][i] = ptr.val;
                ptr = ptr.next;
            }
            bottomrow--;
            for(int i=bottomrow;i>=toprow && ptr!=null;i--)
            {
                ans[i][leftcol] = ptr.val;
                ptr = ptr.next;
            }
            leftcol++; 
        }
        return ans;
    }
}
