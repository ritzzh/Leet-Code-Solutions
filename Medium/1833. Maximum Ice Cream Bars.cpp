class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0, count=0;
        for(int x: costs)
        {
            if(x<=coins && (sum+x)<=coins)
            {
                sum=sum+x;
                count++;
            }
        }
        return count;
    }
};
