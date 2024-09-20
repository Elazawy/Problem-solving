// Problem name : Summation
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L
// Date : Fri Sep 20 2024
// time limit : 1
// memory limit 256
# define ll long long
#include<iostream>
#include<vector>
using namespace std;

ll sum(vector<int> nums, int n, ll sum_of_nums = 0){
    if(n > -1){
        sum_of_nums += nums.at(n);
        return sum(nums, n - 1 , sum_of_nums);
    }
    return sum_of_nums;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums.at(i);
    }
    cout << sum(nums, n-1);
}