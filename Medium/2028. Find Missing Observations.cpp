class Solution {
    public int[] missingRolls(int[] rolls, int mean, int n) {
        int total = mean*(rolls.length+n);
        int sum = IntStream.of(rolls).sum();
        int target = total-sum;
        int [] ans= new int[n];

        if(target>n*6 || target<n)
        {
            int [] emptyAns = new int[]{};
            return emptyAns;
        }
        for(int i=0;i<n;i++){
            ans[i] = target/n;
        }
        sum = IntStream.of(ans).sum();
        target = target-sum;

        if(target+ans[0]<6)
        {
            ans[0]+=target;
        }
        else{
            int i=0;
            while(target>0)
            {
                ans[i]+=1;
                target--;
                i++;
                if(i==ans.length)
                {
                    i=0;
                }
            }
        }
        
        System.out.println(target);
        return ans;
    }
}
