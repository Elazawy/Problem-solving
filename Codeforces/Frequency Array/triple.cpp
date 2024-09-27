// Problem name : Triple
// URL : https://codeforces.com/group/isP4JMZTix/contest/380288/problem/A
// time limit : 1
// memory limit 256
// Date : Fri Sep 27 2024

#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums.at(i);
        }
        vector<int> freq(n+1, 0);
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]] >= 3){
                ans = nums[i];
                break;
            }
        }
        cout << ans << endl;
    }
}