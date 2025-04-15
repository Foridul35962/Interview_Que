/*Leetcode 238*/
class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int l=0;
            int idx=-1;
            int a=1;
            vector<int>v;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0)
                {
                    l++;
                    idx=i;
                }
                else
                    a*=nums[i];
            }
            for(int i=0;i<nums.size();i++)
            {
                if(l>1)
                    v.push_back(0);
                else if(l==1)
                {
                    if(i==idx)
                    {
                        v.push_back(a);
                    }
                    else
                        v.push_back(0);
                }
                else if(l==0)
                {
                    v.push_back(a/nums[i]);
                }
            }
            return v;
        }
    };