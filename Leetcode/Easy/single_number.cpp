// URL -> https://leetcode.com/problems/single-number/description/
// Date: 2 22 2026

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> distinct_nums;
        for(const int num : nums){
            if(distinct_nums.find(num) != distinct_nums.end()) return true;
            distinct_nums.insert(num);
        }
        return false;
    }
};
