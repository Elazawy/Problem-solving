// URL -> https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
// Date: 25 2 2026

:lass Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> num1_freq;
        for(const int n : nums1) {
            num1_freq[n]++;
        }
        vector<int> result;
        for(const int n : nums2) {
            if(num1_freq[n]) {
                result.push_back(n);
                num1_freq[n]--;
            }
        }
        return result;
    }
};
