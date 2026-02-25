// URL -> https://leetcode.com/explore/learn/card/hash-table/184/comparison-with-other-data-structures/1120/
// Date: 25 2 2026

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> unique_chars;
        for(int i=0; i < s.length(); i++) {
            unique_chars[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++) {
            auto it = unique_chars.find(s[i]);
            if( it != unique_chars.end() && it->second == 1) return i;            
        }
     return -1;       
    }
};
