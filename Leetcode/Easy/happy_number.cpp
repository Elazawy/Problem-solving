// URL -> https://leetcode.com/problems/happy-number/description/
// Date: 2 23 2026

// Using HashTable
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

// Using slow and fast pointer
class Solution {
public:
    int getNext(int n){
        int sum = 0;
        while(n != 0){
            sum += (n%10) * (n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(slow);
        while(fast != slow && fast != 1){
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        return fast == 1;
    }
};
