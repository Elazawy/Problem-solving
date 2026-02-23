// URL -> https://leetcode.com/problems/happy-number/description/
// Date: 2 23 2026

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> freq_nums;
        while(n != 1){
            int digit = 0;
            while(n != 0){
                digit += pow(n%10, 2);
                n/=10;
            }
            if(freq_nums.find(digit) != freq_nums.end()) return false;
            freq_nums.insert(digit);
            n = digit;
        }
        return true;
    }
};
