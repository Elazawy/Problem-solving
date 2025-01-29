// Problem name: Top_K_Frequent_Elements
// URL: https://leetcode.com/problems/top-k-frequent-elements/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        std::unordered_map<int, int> freq;
        for(const int &num: nums){
            freq[num]++;
        }
        std::priority_queue<pair<int, int>> maxHeap;
        for(const auto& [num, count]: freq){
            maxHeap.push({count, num});
        }
        while(k--){
            res.push_back(maxHeap.top().second);  
            maxHeap.pop();
        }
        return res;
    }
};
