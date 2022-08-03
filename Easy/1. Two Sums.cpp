class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i , j , k,flag=0,n;
        n=nums.size();
        vector<int>v;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        return v;

    }
};
