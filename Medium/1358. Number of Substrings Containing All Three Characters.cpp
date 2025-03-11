class Solution {
    public int numberOfSubstrings(String s) {
        int l = 0;
        int r = 0;
        int ans = 0;
        int[] arr = { 0, 0, 0 };

        while (r < s.length()) {
            if (s.charAt(r) == 'a') {
                arr[0]++;
            }
            if (s.charAt(r) == 'b') {
                arr[1]++;
            }
            if (s.charAt(r) == 'c') {
                arr[2]++;
            }
            while (arr[0] > 0 && arr[1] > 0 && arr[2] > 0) {
                ans += s.length() - r;
                if (s.charAt(l) == 'a') {
                    arr[0]--;
                }
                if (s.charAt(l) == 'b') {
                    arr[1]--;
                }
                if (s.charAt(l) == 'c') {
                    arr[2]--;
                }
                l++;
            }
            r++;
        }

        return ans;
    }
}
