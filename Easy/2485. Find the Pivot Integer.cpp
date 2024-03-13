class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1) {
            return 1;
        }
        int i = 1, j = n;
        int is = i, js = j;
        while (i < j) {
            if (is == js && (j - i) <= 2) {
                if (i + 1 == j - 1)
                    return i + 1;
                else
                    return -1;
            } else if (is == js && (j - i) > 2) {
                i++;
                is += i;
            }
            if (is < js) {
                i++;
                is += i;
            } else if (is > js) {
                j--;
                js += j;
            }
        }

        return -1;
    }
};
