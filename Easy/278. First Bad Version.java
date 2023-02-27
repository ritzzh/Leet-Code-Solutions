/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int beg = 0;
        int end = n;
        int mid = n/2;
       while(beg<=end)
       {
           mid = beg + (end-beg)/2;
           if(isBadVersion(mid)==true && isBadVersion(mid-1)==false)
           {
               return mid;
           }
           
           if(isBadVersion(mid)==false)
           {
               beg = ++mid;
               
           }
           else
           {
               end= --mid;
           }
           
       }
       return mid;

    }
}
