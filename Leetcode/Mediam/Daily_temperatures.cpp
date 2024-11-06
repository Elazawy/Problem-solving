// Problem name : Daily temperatures
// URL : https://leetcode.com/problems/daily-temperatures/description/
// Date : Wed Nov 6 2024

#include<iostream>
#include<vector>
#include<stack>
#include<utility>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> num_days(temperatures.size(),0);
        stack<pair<int,int>> s;
        pair<int,int> p;
        p.first = 0;
        p.second = temperatures[0];
        s.push(p);
        for (int i = 1; i < temperatures.size(); i++){
            while(!s.empty() && temperatures[i] > s.top().second){
                num_days.at(s.top().first) = i - s.top().first;
                s.pop();
            }
            p.first = i;
            p.second = temperatures[i];
            s.push(p);
        }
        return num_days;
    }
};