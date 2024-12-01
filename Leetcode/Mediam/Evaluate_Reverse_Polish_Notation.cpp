// Problem name : Evaluate Reverse Polish Notation
// URL : https://leetcode.com/problems/evaluate-reverse-polish-notation/description/
// Date : Sun Dec 1 2024
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for (int i = 0; i < tokens.size(); i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int res;
                int f_num = nums.top();
                nums.pop();
                switch (tokens[i][0]){
                case '+':
                    res = nums.top() + f_num;
                    break;
                case '-':
                    res = nums.top() - f_num;
                    break; 
                case '*':
                    res = f_num * nums.top();
                    break; 
                case '/':
                    res = nums.top() / f_num;
                    break; 
                default:
                    break;
                }
                nums.pop();
                nums.push(res);
            }
            else{
                nums.push(stoi(tokens[i]));
            }
        }
        return nums.top();
    }
};
