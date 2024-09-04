// problem name : Power of two
// url : https://leetcode.com/problems/power-of-two/description/
// Date : wed Sep  4 2024 

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n-1))==0;
    }
};

