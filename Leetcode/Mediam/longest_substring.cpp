// URL -> https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
// Date: 27 2 2026


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last_seen;
        int longest = 0;
        int cur_len = 0;
        for(int i = 0; i < s.size(); i++) {
            if(last_seen.count(s[i])) {
                if(cur_len > longest) longest = cur_len;
                i = last_seen[s[i]] + 1;
                last_seen.clear();
                cur_len = 0;
            }
            last_seen[s[i]] = i;
            cur_len++;
        }
        return max(cur_len, longest);
    }
};
