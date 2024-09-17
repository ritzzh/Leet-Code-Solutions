class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        String [] a = new String[s1.length()];
        String [] b = new String[s2.length()];
        List<String> ans = new ArrayList<String>();
        a = s1.split(" ");
        b = s2.split(" ");
        Map<String,Integer> check = new HashMap<String,Integer>();
        for(String x: a)
        {
            if(check.containsKey(x))
            {
                check.put(x,check.get(x)+1);
            }
            else check.put(x,1);
        }
        for(String x: b)
        {
            if(check.containsKey(x))
            {
                check.put(x,check.get(x)+1);
            }
            else check.put(x,1);
        }
        for(Map.Entry<String,Integer> ele : check.entrySet())
        {
            if(ele.getValue()<2)
            {
                ans.add(ele.getKey());
            }
        }
        String [] res = new String[ans.size()];
        for(int i=0;i<ans.size();i++)
        {
            res[i] = ans.get(i);
        }
        return res;
    }
}
