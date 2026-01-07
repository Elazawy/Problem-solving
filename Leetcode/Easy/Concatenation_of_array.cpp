// Problem Link: https://leetcode.com/problems/concatenation-of-array/
// Problem Name: concatenation-of-array
// Date: Thu Jan 6 2026

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i< nums.size()*2; i++){
            ans.push_back(nums[i%nums.size()]);
        }
        return ans;
    }
};