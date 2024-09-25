// Problem name : Reach Value
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
// time limit : 1
// memory limit 256
// Date : Wed Sep 25 2024

#include<iostream>
#include<vector>
#include<iomanip>
#define ll long long
using namespace std;

bool by_together(ll n, ll initial = 1){
    if(initial == n) return true;
    if(initial < n) return by_together(n, initial * 10) || by_together(n, initial * 20);
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(by_together(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
