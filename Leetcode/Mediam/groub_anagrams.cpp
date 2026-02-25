// URL -> https://leetcode.com/explore/learn/card/hash-table/185/hash_table_design_the_key/1124/
// Date: 25 2 2026

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        for(const string s : strs) {
            string s_copy = s;
            sort(s_copy.begin(), s_copy.end());
            anagrams[s_copy].push_back(s);
        }
        vector<vector<string>> result;
        for(auto it = anagrams.begin(); it != anagrams.end(); it++){
            result.push_back({});
            for(const string s : it->second) {
                result[result.size()-1].push_back(s);
            }
        }
        return result;
    }
};
