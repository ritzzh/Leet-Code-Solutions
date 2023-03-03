//can be optimized (Using Robin Karp Algorithm, indexOf function etc.)

class Solution {
    public int strStr(String haystack, String needle) {
        int hl = haystack.length();
        int nl = needle.length();
        int j=0;

        if(haystack.equals(needle))
        {
            return 0;
        }
        if(hl<nl)
        {
            return -1;
        }
        for(int i =0; i<hl-nl+1;i++)
        {

            // System.out.println(haystack.charAt(i)+" "+needle.charAt(j));
            if(haystack.charAt(i)==needle.charAt(j))
            {
                int count=0;
                System.out.println(haystack.charAt(i)+" "+needle.charAt(j));
                for(j=0;j<nl;j++)
                {
                    if(haystack.charAt(j+i)==needle.charAt(j))
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(count==nl)
                {
                    return i;
                    
                }
                else
                {
                    j=0;
                }
            }
        }
        return -1;
    }
}
