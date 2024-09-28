// Problem name : Koko And The Transformation
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/C
// time limit : 1 
// memory limit 256
// Date : Sat Sep 28 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    ll sum_a = 0, sum_b = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum_a += a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        sum_b += b[i];
    }
    if(sum_a == sum_b){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}