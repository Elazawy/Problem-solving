// Problem name : Garland
// URL : https://codeforces.com/group/isP4JMZTix/contest/380288/problem/B
// time limit : 1 
// memory limit 256
// Date : Sat Sep 28 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    string n,m;
    cin >> n >> m;
    vector<int> num_n(26, 0), num_m(26, 0);
    for(char c : n) num_n[c - 'a']++;
    for(char c : m) num_m[c - 'a']++;
    int max_area = 0;
    for (int i = 0; i < 26; i++)
    {
        if(num_n[i] == 0 && num_m[i] > 0){
            cout << -1;
            return 0;
        }
        else{
            max_area += min(num_n[i], num_m[i]);
        }
    }
    cout << max_area;
}