class Solution {
    public int getLucky(String s, int k) {
        ArrayList<Integer> Al = new ArrayList<Integer>();
        String ans = "";
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            Al.add((int) s.charAt(i) - 96);
        }
        for (int i = 0; i < Al.size(); i++) {
            ans += Integer.toString(Al.get(i));
        }
        while (k > 0) {
            sum = 0;
            for (int i = 0; i < ans.length(); i++) {
                sum += Integer.parseInt(String.valueOf(ans.charAt(i)));
            }
            ans = Integer.toString(sum);
            k--;
        }
        return sum;
    }
}
