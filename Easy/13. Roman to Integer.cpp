class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int i ,j ,k ,n ,p,sum=0;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V')
                {
                    sum+=4;
                    i++;
                }
                else if(s[i+1]=='X')
                {
                    sum+=9;
                    i++;
                }
                else
                    sum+=1;
            }
            else if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {
                    sum+=40;
                    i++;
                }
                else if(s[i+1]=='C')
                {
                    sum+=90;
                    i++;
                }
                else
                    sum+=10;
            }
            else if(s[i]=='C')
            {
                if(s[i+1]=='D')
                {
                    sum+=400;
                    i++;
                }
                else if(s[i+1]=='M')
                {
                    sum+=900;
                    i++;
                }
                else
                    sum+=100;
            }
            else
                sum+=mp[s[i]];
        }
        return sum;

    }
};
