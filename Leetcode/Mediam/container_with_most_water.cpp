// Problem name: Container with most water
// URL : https://leetcode.com/problems/container-with-most-water/description/
// Date: Wed Sep 11 2024 

#include<iostream>
#include<cmath>
#include <iomanip>
#include<vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int left = 0, right = height.size()-1;
        while(left != right){
            int cur_area = min(height[left],height[right]) * (right - left);
            res = max(res, cur_area);
            if(height[left] < height[right]){
                left++;
            }
            else {
                right--;
            }
        }
        return res;
    }
};
