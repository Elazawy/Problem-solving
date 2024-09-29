// Problem name : Max Number
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
// Date : Fri Sep 20 2024
// time limit : 1
// memory limit 64
# define ll long long
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int find_max(vector<int> nums, int n,int max_num){
    if(n > -1){
        max_num = max(max_num, nums.at(n));
        return find_max(nums, n-1 , max_num);
    }
    return max_num;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums.at(i);
    }
    int max_num = nums.at(0);
    cout << find_max(nums, n-1, max_num);
}