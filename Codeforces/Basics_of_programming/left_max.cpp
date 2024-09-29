// Problem name : Left Max
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Z
// time limit : 1
// memory limit 256
// Date : Thu Sep 26 2024

#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#define ll long long
using namespace std;

void max_num(int n, vector<int> &nums, int mx, int i = 0){
    if(i < n){
        mx = max(mx, nums[i]);
        cout << mx << ' ';
        max_num(n, nums, mx, i+1);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int mx = nums[0];
    max_num(n, nums, mx);
}