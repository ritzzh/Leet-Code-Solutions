class Solution {
    public int possibleStringCount(String word) {
        Map<Character, Integer> m = new HashMap();

        m.put(word.charAt(0), 1);

        for (int i = 1; i < word.length(); i++) {
            if (word.charAt(i) == word.charAt(i - 1)) {

                if (m.containsKey(word.charAt(i))) {

                    System.out.println(word.charAt(i));
                    m.put(word.charAt(i), m.get(word.charAt(i)) + 1);
                } else {
                    m.put(word.charAt(i), 2);
                }
            }
        }
        int ans = 0;
        for (char x : m.keySet()) {
            ans += m.get(x) - 1;
        }

        return ans + 1;
    }
}
