class Solution {
public:
    bool isPalindrome(int x) {
        string y=to_string(x);
        int i,j,k,len,flag=0;
        len=y.size();
        for(i=0,j=len-1;i<len/2;i++)
        {
            if(y[i]!=y[j])
            {flag=1;
            break;}
            j--;


        }
        if(flag==0)
            return true;
        else
            return false;
    }
};
