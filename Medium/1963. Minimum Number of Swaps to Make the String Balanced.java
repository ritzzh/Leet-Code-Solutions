class Solution {
    public int minSwaps(String s) {
        Stack<Character> st = new Stack<>();
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='[')
            st.push(s.charAt(i));

            else
            {
                if(!st.isEmpty())
                {
                    if(st.peek()=='[')
                    st.pop();
                }
                else
                {
                    if(s.charAt(i)=='[')
                    st.push(s.charAt(i));
                }
            }
            
        }
        if(st.size()==0 || st.size()==1)
        {
            return st.size();
        }
        else if(st.size()%2==0)
        {
            return st.size()/2;
        }
        else if(st.size()%2!=0)
        {
            return (st.size()+1)/2;
        }
        else
        {
            return st.size();
        }
    }
}
