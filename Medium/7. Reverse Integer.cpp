class Solution {
public:
    int reverse(int x) {
        int val,i,j=0,y;
        val=abs(x);
        while(val>0)
        {
            y=val%10;
            val=val/10;
            j=j*10+y;
            if(j>214748364 &&val>0)
                return 0;
        }
        if(x<0) return -j;
        else
            return j;

    }
};
