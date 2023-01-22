class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=0,min=prices[0],maxi=0;
        for(i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min = prices[i];
                j=i;
            }
            if((prices[i]-min)>maxi & i>j)
            {
                maxi = prices[i]-min;
            }
        }
        return maxi; 
    }
};
