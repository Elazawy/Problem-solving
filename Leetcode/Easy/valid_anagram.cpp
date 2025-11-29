// Problem name : Valid Anagram
// URL : https://leetcode.com/problems/valid-anagram
// Date: Sat Nov 30 2025 

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s == t && s.size() == 1){
            return true;
        }
        if(s == t || s.size() != t.size()) {
            return false;
        }
        map<char, int> chars_s, chars_t;
        for(int i=0; i < s.size(); i++){
            chars_s[s[i]]++;
            chars_t[t[i]]++;
        }
        for(int i=0; i < chars_s.size(); i++){
            if(chars_s[i] != chars_t[i]) return false;
        }
        return true;
    }
};