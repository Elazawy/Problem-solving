// Problem name : Array Average
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S
// time limit : 1
// memory limit 256
// Date : Tue Sep 24 2024

#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

double calc_average(int n, vector<int> &nums, int pos = 0, double res = 0){
    if(pos < n){
        res += nums[pos];
        return calc_average(n, nums, pos+1, res);
    }
    return res / n;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << fixed << setprecision(6) << calc_average(n, nums);
}
