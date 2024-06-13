class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int beg = 0, mid = 0, end = nums.size()-1;
        int neg=0, pos =0;int n = nums.size();

        while(beg<=end){
            mid = (beg+end)/2;
            if(nums[mid]<0){
                neg = mid+1;
                beg = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        beg = 0, end = nums.size()-1;
        while(beg<=end){
            mid = (beg+end)/2;
            if(nums[mid]>0){
                pos = n-mid;
                end = mid-1;
            }   
            else{
                beg=mid+1;
            }
        } 
        return max(pos,neg);
    }
};
