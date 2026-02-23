//Problem Link: https://leetcode.com/problems/two-sum/
// Problem name : Two Sum
// Date: Sun Nov 30 2025
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p1 = 0, p2=nums.size()-1;
        vector<int> indexes(2);
        vector<pair<int,int>> pairs;
        for(int i=0; i< nums.size(); i++){
            pairs.push_back({nums[i], i});
        }
        sort(pairs.begin(), pairs.end());
        int sum;
        while(p1 < p2){
            sum = pairs[p1].first + pairs[p2].first;
            if(sum == target){
                indexes[0] = pairs[p1].second;
                indexes[1] = pairs[p2].second;
                break;
            }
            else if(sum >target){
                p2--;
            }
            else {
                p1++;
            }
        }
        return indexes;
    }
};

// Using HashMap
// Date: 2 23 2026
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map_nums;
        
        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            
            if(map_nums.count(complement)){
                return {map_nums[complement], i};
            }
            
            map_nums.insert(make_pair(nums[i], i));
            
        }
        return {};
    }
};
