// Problem Link: https://leetcode.com/problems/contains-duplicate/
// Poblem Name: Contains Duplicate
// Date: Fri Nov 28 2025
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
            if(freq[nums[i]] > 1){
                return true;
            }
        }
        return false;
    }
};