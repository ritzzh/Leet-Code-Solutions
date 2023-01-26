class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alen = ransomNote.length();
        int blen = magazine.length();
        bool check = false;
        unordered_map<char ,int> omap;
        unordered_map<char ,int> tmap;
        for(int i=0;i<alen;i++)
        {
            char a = ransomNote[i];
            omap[a]++;
            
        }
        for(int i=0;i<blen;i++)
        {
            char b = magazine[i];
            tmap[b]++;
            
        }
        if(omap==tmap)
        {
            check=true;
        }
        unordered_map<char, int>::iterator it = omap.begin();
        unordered_map<char, int>::iterator tit = tmap.begin();

        // Iterate through the map and compare
        while (it != omap.end())
        {
            cout<<" key1 : "<<it->first<<" key2 : "<<tit->first<<endl;
            cout<<" value1 : "<<it->second<<" value2 : "<<tit->second<<endl;
            
            if(it->first==tit->first)
            {
                // cout<<" key1 : "<<it->first<<" key2 : "<<tit->first<<endl;
                // cout<<" value1 : "<<it->second<<" value2 : "<<tit->second<<endl;
                if(it->second <= tit->second)
                {
                    check=true;
                }
                else
                {
                    return false;
                }
                tit = tmap.begin();
                ++it;
            }
            else
            {
                tit++;
            }
            if(tit == tmap.end())
            {
                cout<<"reached end of tit";
                return false;
            } 
        }
        cout<<"not found";
        return check;
    }
};
