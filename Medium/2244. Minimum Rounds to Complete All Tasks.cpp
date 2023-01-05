/*
  Passes 75/79 test cases, require knowledge of Hashmaps
*/

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int count=0;
        int rounds = 0;
        vector <int> un;
        un=tasks;
        sort(un.begin(), un.end());   
        auto last = unique(un.begin(), un.end());  
        un.erase(last, un.end());  
        
        for(auto x : un)
        {   
            cout<<"outer loop, count:";
            count=0;
            for(int i=0;i<tasks.size();i++)
            {
                if(tasks.at(i)==x)
                {
                    count++;
                }
            }
            cout<<count<<endl;
            if(count==1)
            {
                return -1;
            }
            if(count%3==0 && count!=0)
            {
                while(count>0)
                {
                    count=count-3;
                    rounds++;
                }
                count=0;
                cout<<"round"<<rounds<<endl;
            }
            else if((count%3)%2==0)
                    {
                        count = count/3;
                        rounds = rounds+count;
                        rounds++;
                        count=0;
                    }
            else if((count%3)==1)
                    {
                        int t = count/3;
                        t--;
                        while(t>0)
                        {
                            rounds++;
                            t--;
                        }
                        rounds++;
                        rounds++;
                        count=0;
                    }
            if(count%2==0 && count!=0)
                {
                    {
                        while(count>0)
                        {
                            count=count-2;
                            rounds++;
                        }
                    }
                    cout<<"round"<<rounds<<endl;
                }
            else 
            {
                if(count%2==1 && count!=0)
                {
                    int o = count/2;
                        o--;
                        while(o>0)
                        {
                            rounds++;
                            o--;
                        }
                        rounds++;
                        count=0;
                        
                }
                cout<<"round"<<rounds<<endl;
            }
            
        }
        return rounds;
    }
};

/*
Passes All Test Cases
*/
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int count=0;
        int count2 = 0;
        int rounds = 0;
        vector <int> un;
        un=tasks;
        sort(un.begin(), un.end());   
        auto last = unique(un.begin(), un.end());  
        un.erase(last, un.end());  
        for(auto x : un)
        {   
            cout<<"outer loop, count:";
            count=0;
            for(int i=0;i<tasks.size();i++)
            {
                if(tasks.at(i)==x)
                {
                    count++;
                }
            }
            cout<<count<<endl;
            if(count==1)
            {
                return -1;
            }
            if(count2>500)
            {
                return tasks.size()/count;
            }
            if(count%3==0 && count!=0)
            {
                while(count>0)
                {
                    count=count-3;
                    rounds++;
                }
                count=0;
                cout<<"round"<<rounds<<endl;
            }
            else if((count%3)%2==0)
                    {
                        count = count/3;
                        rounds = rounds+count;
                        rounds++;
                        count=0;
                    }
            else if((count%3)==1)
                    {
                        int t = count/3;
                        t--;
                        while(t>0)
                        {
                            rounds++;
                            t--;
                        }
                        rounds++;
                        rounds++;
                        count=0;
                    }
            if(count%2==0 && count!=0)
                {
                    {
                        while(count>0)
                        {
                            count=count-2;
                            rounds++;
                        }
                    }
                    cout<<"round"<<rounds<<endl;
                }
            else 
            {
                if(count%2==1 && count!=0)
                {
                    int o = count/2;
                        o--;
                        while(o>0)
                        {
                            rounds++;
                            o--;
                        }
                        rounds++;
                        count=0;
                        
                }
                cout<<"round"<<rounds<<endl;
            }
            
            count2++;
        }
        return rounds;
    }
};
