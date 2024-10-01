// Problem name : Canvas Frames
// URL : https://codeforces.com/group/isP4JMZTix/contest/380288/problem/C
// time limit : 1 
// memory limit 256
// Date : Mon Sep 30 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    vector<int> freq_arr(101, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        freq_arr[nums[i]]++;
    }
    int num_frames = 0;
    for (int i = 0; i < 101; i++)
    {
        num_frames += freq_arr[i]/2;
    }
    cout << num_frames / 2;
}
