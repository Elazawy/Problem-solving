// URL -> https://leetcode.com/problems/find-the-duplicate-number/description/
// Date: 3 12 2026

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> unique_nums;
        for(const int& num : nums) {
            if(unique_nums.count(num)) return num;
            unique_nums.insert(num);
        }
        return -1;
    }
};
