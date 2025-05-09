class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int tmp=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            tmp+=nums[i];
            sum=max(sum,tmp);
            if(tmp<1)
                tmp=0;
        }
        return sum;
    }
};