// Problem URL: https://leetcode.com/problems/product-of-array-except-self/description/
// Date: Fri DEC 12 2025
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product_of_all= 1;
        int product_without_zero_values = 1;
        int num_of_zeros = 0;
        for(const int num : nums){
            if(num == 0) {
                if(num_of_zeros > 1){
                    product_of_all = 0;
                    break;
                }
                num_of_zeros++;
            }
            else if(num != 0){
                product_without_zero_values*= num;
            }
            product_of_all*= num;
        }
        if(num_of_zeros > 1){
            vector<int> ans(nums.size(), 0);
            return ans;
        }
        vector<int> ans(nums.size(), 1);
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                ans[i] = product_without_zero_values;
            }else if( nums[i] == 1){
                ans[i] = product_of_all;
            } else {
                ans[i] = product_of_all - ((product_of_all * std::pow((nums[i]), -1)) *(nums[i]-1));

            }
        }
        return ans;
    }
};
