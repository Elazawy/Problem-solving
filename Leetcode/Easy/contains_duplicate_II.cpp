// URL -> https://leetcode.com/problems/contains-duplicate-ii/description/
// Date: 25 2 2026

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> nums_freq;
        for(int i = 0; i < nums.size(); i++){
            if(nums_freq.contains(nums[i]) &&
               abs(nums_freq[nums[i]] - i) <= k) return true;
            nums_freq[nums[i]] = i;
        }
        return false;
    }
};
