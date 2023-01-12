class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> answer;
        string x = " ";
        for(int i=1;i<=n;i++)
        {
            
            if(i%3==0)
            {
                x="Fizz";
            }
            if(i%5==0)
            {
                x="Buzz";
            }
            if(i%3==0 && i%5==0)
            {
                x="FizzBuzz";
            }
            if(i%5!=0 && i%3!=0)
            {
                x = to_string(i);
            }
            answer.push_back(x);
            
        }
        return answer;
    }
};
