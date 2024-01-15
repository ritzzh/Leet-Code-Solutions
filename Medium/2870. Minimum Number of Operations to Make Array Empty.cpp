class Solution {
public:
    int minOperations(vector<int>& nums) {

        map<int,int> a;
        int count = 0;

        for( int x : nums)
        {
            a[x]++;
        }
        for(auto x: a)
        {
            if(x.second==1)
            {
                return -1;
            }
            if(x.second%3==0)
            {
                count = count + x.second/3;
            }
            else if( x.second%3==2)
            {
                count = count + x.second/3 + 1;
            }
            else if( (x.second-3)%2==1)
            {
                count = count + (x.second-4)/3 + 2;
            }
            else if((x.second-4)%3==0)
            {
                count += (x.second-3)/3 + 2;
            }
            else if(x.second%2==0)
            {
                count += x.second/2;
            }

        }
        return count;
    }
};
