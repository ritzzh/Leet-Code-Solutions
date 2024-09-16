class Solution {
    public int findMinDifference(List<String> timePoints) {
        ArrayList<Integer> pre = new ArrayList<Integer>();
        int ans = Integer.MAX_VALUE;
        for(String x: timePoints)
        {
            int h = Integer.parseInt(x.substring(0,2))*60;
            int m = Integer.parseInt(x.substring(3,5));
            int total = h+m;
            pre.add(total);
        }
        pre.sort(null);
        for(int i = 1; i<pre.size();i++)
        {
            ans = Math.min(ans,(pre.get(i)-pre.get(i-1)));
        }
        ans = Math.min(ans,(1440-pre.get(pre.size()-1)+pre.get(0)));
        return ans;
    }
}
