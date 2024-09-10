// Problem name : Product
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Q
// Date: THU Sep 10 2024 


#include<iostream>
using namespace std;

int main (){
    int l,r,m;
    cin >> l >> r >> m;
    long long result = 1;
    for(int i=l; i<=r ; i++){
        result = (result * (i % m)) % m;
    }
    cout << result;
}