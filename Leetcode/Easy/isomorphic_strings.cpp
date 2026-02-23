// URL -> https://leetcode.com/problems/isomorphic-strings/description/
// Date: 2 23 2026

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapping;
        unordered_map<char, char> reverse_mapping;
        for(int i=0; i<s.length(); i++) {
            auto c = mapping.find(s[i]);
            if(c != mapping.end()){
                if(c->second != t[i]) return false;
            }
            if(reverse_mapping.find(t[i]) != reverse_mapping.end() && reverse_mapping[t[i]] != s[i]) return false;

            mapping[s[i]] = t[i];
            reverse_mapping[t[i]] = s[i];
        }  
        return true;
    }
};

