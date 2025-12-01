// Problem URL: https://leetcode.com/problems/group-anagrams/
// Problem name : Group Anagrams
// Date: Mon Dec 01 2025

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<unordered_map<char, int>> chars_freq(strs.size());
        for(int i=0; i< strs.size(); i++) {
            for(int j=0; j< strs[i].size(); j++){
                chars_freq[i][strs[i][j]]++;
            }
        }
        vector<bool> checked_indexes(strs.size(), false);
        for(int i=0; i < strs.size(); i++){
            if(checked_indexes[i]){
                continue;
            }
            vector<string> current;
            current.push_back(strs[i]);
            for(int j=i+1; j< strs.size(); j++){
                if(checked_indexes[i]){
                    continue;
                }
                if(chars_freq[i] == chars_freq[j]){
                    current.push_back(strs[j]);
                    checked_indexes[j] = true;
                }
            }
            ans.push_back(current);
        }
        return ans;
    }
};