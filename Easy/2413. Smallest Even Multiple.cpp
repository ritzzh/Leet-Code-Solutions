/*
Faster Method
*/

class Solution {
public:
    int smallestEvenMultiple(int n) {
        for(int i=1;i<n*1000;i++)
        {
            cout<<n;
            if((n*i)%2==0)
            {
                return n*i;
            }
        }
        return n;
    }
};

/*
Simpler Method
*/
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n/2==00
           return n;
        else
           return n*2;
    }
};
