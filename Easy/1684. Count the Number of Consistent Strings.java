class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        Set<Character> t = new HashSet<Character>();
        for(int i=0;i<allowed.length();i++)
        {
            t.add(allowed.charAt(i));
        }
        int count = 0;
        for(String x: words)
        {
            boolean valid = true;
            for(int i=0;i<x.length();i++)
            {
                if(!t.contains(x.charAt(i)))
                {
                    valid = false;
                    break;
                }
            }
            if(valid)count++;
        }
        return count;
    }
}
