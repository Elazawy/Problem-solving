// Problem name: check if two string arrays are equivalent
// URL : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/
// Start: Thu Aug 30 2024
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w_1 = "", w_2= "";
        for (int i = 0; i < word1.size(); i++)
        {
            for (int j = 0; j < word1[i].size(); j++)
            {
                w_1+= word1[i][j];
            }
            
        }
        for (int i = 0; i < word2.size(); i++)
        {
            for (int j = 0; j < word2[i].size(); j++)
            {
                w_2+= word2[i][j];
            }
            
        }
        if(w_1.size()!=w_2.size()){
            return false;
        }
        else {
            for (int i = 0; i < word1.size(); i++)
            {
                if(w_1[i]!=w_2[i]){
                    return false;
                }
            }
            return true;
        }
    }
};

