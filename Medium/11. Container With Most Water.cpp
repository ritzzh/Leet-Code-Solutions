class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int h = 1;
        int w = 1;
        int ans = 0;
        int maxans = 0;
        while(low<high)
        {
            if(height[low]<=height[high])
            {
                h = min(height[low],height[high]);
                w = high-low;
                ans = h*w;
                low++;
            }
            else
            {
                h = min(height[low],height[high]);
                w = high-low;
                ans = h*w;
                high--;
            }
            maxans = max(ans,maxans);
        }
        return maxans;
    }
};
