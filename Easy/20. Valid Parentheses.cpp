class Solution {
public:
    bool isValid(string s) {
        vector <char> stack;
        for(char x : s)
        {
            if(x=='(' || x=='{'|| x=='[')
            {
                stack.push_back(x);
            }
            else
            {
                if(stack.empty()==false)
                {
                    if(x==')' )
                    {
                        if(stack.back()=='(')
                        {
                            stack.pop_back();
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else if(x==']' )
                    {
                        if(stack.back()=='[')
                        {
                            stack.pop_back();
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else if(x=='}' )
                    {
                        if(stack.back()=='{')
                        {
                            stack.pop_back();
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                else
                {
                    return false;
                }
               
            }
            
        }
        if(stack.empty())
        {
            return true;
        }
        return false;
    }
};
