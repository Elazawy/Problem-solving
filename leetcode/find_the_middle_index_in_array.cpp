// Problem name : find the middle index in array
// URL : https://leetcode.com/problems/find-the-middle-index-in-array/description/
// Date: sun Sep 8 2024 


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int middle_index = -1;
        for (int i = 0; i < nums.size(); i++){
            int sum_before = 0, sum_after = 0;
            for(int j=0;j<i; j++){
                sum_before += nums[j];
            }
            for(int j=i+1;j<nums.size(); j++){
                sum_after += nums[j];
            }
            if(sum_before==sum_after){ 
                middle_index = i;
                break;
            }
        }
        return middle_index;
    }
};
