class Solution {
    public int[] findEvenNumbers(int[] digits) {
        HashMap<Integer, Integer> amap = new HashMap<>();
        for (int i = 0; i < digits.length; i++) {
            for (int j = 0; j < digits.length; j++) {
                for (int k = 0; k < digits.length; k++) {
                    if (i == j || j == k || k == i || (digits[k] != 0 && digits[k] % 2 != 0) || digits[i] == 0) {
                        continue;
                    }

                    int number = digits[i] * 100 + digits[j] * 10 + digits[k];
                    amap.put(number, 1);
                }
            }
        }

        ArrayList<Integer> ans = new ArrayList<>(amap.keySet());
        int[] res = new int[ans.size()];

        for (int i = 0; i < ans.size(); i++) {
            res[i] = ans.get(i);
        }
        Arrays.sort(res);
        return res;
    }
}
