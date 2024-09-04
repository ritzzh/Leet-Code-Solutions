class Solution {
    public int robotSim(int[] commands, int[][] obstacles) {
        Set<String> ob = new HashSet<String>();

        for (int[] x : obstacles) {
            ob.add(x[0] + "," + x[1]);
        }

        int[][] direc = new int[][] { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
        int curr = 0;
        int x = 0;
        int y = 0;
        int res = 0;

        for (int c : commands) 
        {
            if (c == -1) {
                curr = (curr + 1) % 4;
            } 
            else if (c == -2) {
                curr = (curr + 3) % 4;
            } 
            else 
            {
                while (c > 0 && 
                !ob.contains((x + direc[curr][0]) + "," + (y + direc[curr][1])))          
                {
                    x += direc[curr][0];
                    y += direc[curr][1];
                    c--;
                }
            }
            res = Math.max(res, x * x + y * y);
        }
        return res;
    }
}
