// URL -> https://leetcode.com/problems/verifying-an-alien-dictionary/description/
// Date: 3 13 2026

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> dict;
        for(int i = 0; i < order.size(); i++) {
            dict[order[i]] = i;
        }
        for(int i = 0; i < words.size() - 1; i++) {
            bool ordered = false;
            for(int j = 0; j < min(words[i].size(), words[i+1].size()); j++) {
                if(dict[words[i][j]] < dict[words[i+1][j]]) {
                    ordered = true;
                    break;
                }
                if(dict[words[i][j]] > dict[words[i+1][j]]) return false;
            }
            if(words[i].size() > words[i+1].size() && !ordered) return false;
        }
        return true;
    }
};
