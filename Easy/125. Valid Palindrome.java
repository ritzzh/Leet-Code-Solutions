class Solution {
    public boolean isPalindrome(String s) {
        int i=0;
        s=s.replaceAll("[^a-zA-Z0-9]","");
        s=s.toLowerCase();
        int j = s.length()-1;
        for(i =0;i<s.length()/2;i++)
        { 
            if(s.charAt(i)==s.charAt(j))
            {  
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    
}
