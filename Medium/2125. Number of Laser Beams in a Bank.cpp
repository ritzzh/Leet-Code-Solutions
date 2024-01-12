class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> test;
        int count = 0;

        for(int i=0;i<bank.size();i++)
        {
            string te = bank[i];
            for(char x: te)
            {
                if(x=='1')
                {
                    count++;
                }
            }
            cout<<count<<endl;
            if(count!=0)
            test.push_back(count);
            count=0;
        }
        cout<<endl;
        int sum = 0;
        for(int i=1;i<test.size();i++)
        {
            sum = sum + (test[i]*test[i-1]);
        }
        
        return sum;
    }
};
