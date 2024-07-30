class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        map<int, int> memo;
        int mans = min(minco(cost, n - 1, memo), minco(cost, n - 2, memo));
        return mans;
    }
    int minco(vector<int>& cost, int i, map<int, int>& memo) {

        if (i == 0 || i == 1) {
            return cost[i];
        }
        if (memo.find(i) != memo.end()) {
            return memo[i];
        }
        int result =
            cost[i] + min(minco(cost, i - 1, memo), minco(cost, i - 2, memo));
        memo[i] = result;
        return result;
    }
};
