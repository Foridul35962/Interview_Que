class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            int maxProd = nums[0];
            int minProd = nums[0];
            int result = nums[0];
    
            for(int i = 1; i < nums.size(); i++) {
                int tempMax = max(nums[i], max(maxProd * nums[i], minProd * nums[i]));
                int tempMin = min(nums[i], min(maxProd * nums[i], minProd * nums[i]));
    
                maxProd = tempMax;
                minProd = tempMin;
    
                result = max(result, maxProd);
            }
            return result;
        }
    };
    