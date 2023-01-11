class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry =1;
        for(int i=digits.size()-1;i>=0;i--)
        {
            digits[i]= digits[i]+carry;
            if(digits[i]>9)
            {
                if(i!=0)
                {
                    carry = (digits[i])/10;
                    digits[i]= (digits[i])%10;
                }
                else
                {
                    carry = (digits[i])/10;
                    digits[i]= (digits[i])%10;
                    digits.insert(digits.begin(),carry);
                    break;
                }
                
            }
            else
            {
                break;
            }
        }
        return digits;
    }
};
