// URL -> https://leetcode.com/problems/4sum-ii/description/
// Date: 28 2 2026

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> sum_nums12, sum_nums34;
        for(const int n1 : nums1) {
            for(const int n2 : nums2) {
                sum_nums12[n1+n2]++;
            }
        }
        for(const int n3 : nums3) {
            for(const int n4 : nums4) {
                sum_nums34[n3+n4]++;
            }
        }
        int count = 0;
        for(auto sum12 = sum_nums12.begin(); sum12 != sum_nums12.end(); sum12++) {
            auto sum34 = sum_nums34.find(0 - sum12->first);
            if(sum34 != sum_nums34.end()) {
                count += sum12->second * sum34->second;
            }
        }
        return count;
    }
};
