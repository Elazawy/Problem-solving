// Problem name : Presents
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/H
// time limit : 2
// memory limit 256
// Date : Thu Oct 3 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> friends_receivers(n+1);
    vector<int> friends_givers(n+1, 0);
    for (int i = 1; i < n+1; i++)
    {
        cin >> friends_receivers[i];
        friends_givers[friends_receivers[i]] = i;
    }
    for (int i = 1; i < n+1; i++)
    {
        cout << friends_givers[i] << ' ';
    }
    
}