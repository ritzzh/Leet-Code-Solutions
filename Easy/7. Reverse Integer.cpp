//Can Be Space Optimized
class Solution {
public:
    int reverse(int x) {
        long sum=0,n=x;
        
        while(x)
        {
            sum = sum*10 + x%10;
            x=x/10;
        }
        if(sum> pow(2,31)-1 || sum< pow(-2,31) )
        {
            return 0;
        }
        return sum;
    }
};
