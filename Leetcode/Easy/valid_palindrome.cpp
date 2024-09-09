// Problem name : valid-palindrome
// URL : https://leetcode.com/problems/valid-palindrome/
// Date: fri Sep 6 2024 


#include<iostream>
using namespace std;

class Solution {
    public:
        bool isPalindrome(string s) {
        string new_s = "";
        for (int i = 0; i < s.size(); i++)
        {
            if(isalnum(s[i])) {
                new_s += tolower(s[i]);
            }
        }
        bool is_palandrome = true;
        
        if(!new_s.empty()){
            for (int i = 0; i <= new_s.size()/2; i++)
            {
                if(new_s[i]!=new_s[new_s.size()-i-1]){
                    is_palandrome = false;
                    break;
                }
            }
        }
        return is_palandrome;
    }

};