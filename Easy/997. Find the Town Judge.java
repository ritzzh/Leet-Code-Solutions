//Create an array to count no. of people who trust a person, if a person's trust==(n-1), i.e everyone else trusts him, he is the judge
class Solution {
    public int findJudge(int n, int[][] trust) {
        int [] array = new int[n+1];
        for(int[]t : trust)
        {
            array[t[0]]--;
            array[t[1]]++;
        }
        for( int i=1;i<=n;i++)
        {
            if(array[i]== (n-1))
            {
                return i;
            }
        }
        return -1;

    }
}
