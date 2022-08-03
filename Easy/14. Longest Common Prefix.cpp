class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        int i,j;
        for(i=0;i<s.size();i++)
        {
            for(j=0;j<strs.size();j++)
            {
                if(s[i]!=strs[j][i])
                    return s.substr(0,i);
            }
        }
        return s;

    }
};
