// URL -> https://leetcode.com/problems/intersection-of-two-arrays/description/
// Date: 2 22 2026

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> distinct_nums1;
        for(const int num : nums1){
            distinct_nums1.insert(num);
        }
        unordered_set<int> distinct_nums2;
        for(const int num : nums2){
            distinct_nums2.insert(num);
        }
        vector<int> intersect;
        for(const int num : distinct_nums1){
            if(distinct_nums2.find(num) != distinct_nums2.end())
                intersect.push_back(num);
        }
        return intersect;
    }
};
