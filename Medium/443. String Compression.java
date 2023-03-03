//can be optimized (done using hashmap)
class Solution {
    public int compress(char[] chars) {
        String h = "";
        for(int i=0;i<chars.length;i++)
        {
            h = h+chars[i];
            Integer count = 1;
            while( i<chars.length-1 && chars[i]==chars[i+1])
            {
                count++;
                i++;
            }
            if(count!=1)
            h += count.toString();
        }
        for(int i=0;i<h.length();i++)
        {
            chars[i] = h.charAt(i);
        }
        return h.length();
    }
}
