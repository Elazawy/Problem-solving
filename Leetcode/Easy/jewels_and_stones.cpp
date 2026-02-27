// URL -> https://leetcode.com/problems/jewels-and-stones/description/
// Date: 27 2 2026

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool jewels_founded[70];
        for(const char j : jewels) {
            jewels_founded[j - 'A'] = true;
        }
        int num_jewels = 0;
        for(const char s: stones) {
            if(jewels_founded[s - 'A']) {
                num_jewels++;
            }
        }
        return num_jewels;
    }
};

