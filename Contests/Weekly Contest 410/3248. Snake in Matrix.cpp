class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i=0,j=0,c=0;
        while(c<commands.size())
        {
            if(commands[c]=="UP"){
                i--;
            }
            else if(commands[c]=="DOWN"){
                i++;
            }
            else if(commands[c]=="RIGHT"){
                j++;
            }
            else if(commands[c]=="LEFT"){
                j--;
            }
            c++;
        }
        return (i*n)+j;
    }
};
