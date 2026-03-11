// URL -> https://leetcode.com/problems/unique-number-of-occurrences/description/
// Date: 3 11 2026

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(const int num : arr) {
            freq[num]++;
        }
        unordered_set<int> uniq_freq;
        for(const auto& [num, f] : freq) {
            if(uniq_freq.contains(f) && f != 0) 
                return false;
            uniq_freq.insert(f);
        }
        return true;
    }
};
