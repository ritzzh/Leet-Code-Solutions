class Solution {
    public int fib(int n) {
        int first=0,second=1,third=0;
        int sum = 0;
        if(n==0)
        {
            return 0;
        }
        for(int i=2;i<n;i++)
        {

            third = first+second;
            first=second;
            second=third;
        }
        sum = first + second;
        return sum;
    }
}
