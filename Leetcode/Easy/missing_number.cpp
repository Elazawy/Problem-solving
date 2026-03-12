// URL -> https://leetcode.com/problems/missing-number/description/
// Date: 3 12 2026
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size() * (nums.size() + 1) / 2;
        for (const int& num : nums) {
            sum -= num;
        }
        return sum;
    }
};
