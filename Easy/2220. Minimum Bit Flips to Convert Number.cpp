class Solution {
    public int minBitFlips(int start, int goal) {
        String x = Integer.toBinaryString(start);
        String y = Integer.toBinaryString(goal);
        if(x.length()<y.length())
        {
            String t = "";
            int n = y.length()-x.length();
            while(n>0)
            {
                t+="0";
                n--;
            }
            t+=x;
            x=t;
        }
        if(y.length()<x.length())
        {
            String t = "";
            int n = x.length()-y.length();
            while(n>0)
            {
                t+="0";
                n--;
            }
            t+=y;
            y=t;
        }

        int count=0;
        for(int i=0;i<x.length();i++)
        {
            if(x.charAt(i)!=y.charAt(i))
            {
                count++;
            }
        }
        return count;
    }
}
