// Problem name : Creating Expression1
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
// time limit : 1
// memory limit 256
// Date : Wed Sep 25 2024
 
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
 
bool express(int x, vector<int> &nums, long long sum, int index = 1){
    if(index == nums.size()){
        return sum == x;
    }
    return express(x, nums, sum + nums[index], index+1) ||
        express(x, nums, sum - nums[index], index+1);
}
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    if(express(x, nums, nums[0])){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}