class Solution {
    public String reverseWords(String s) {
        String[] words = s.split(" ");
        String ans = "";
        for (int i = words.length - 1; i >= 0; i--) {
            if (words[i].trim().length() != 0) {
                ans += words[i].trim();
                ans += " ";
            }
        }
        return ans.trim();
    }
}
