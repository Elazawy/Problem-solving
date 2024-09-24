// Problem name : Combination
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T
// time limit : 2
// memory limit 64
// Date : Tue Sep 24 2024

#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

long long combination(int n, int r){
    if(r == 0 || n == r){
        return 1;
    }
    return combination(n-1, r-1) + combination(n-1, r);
}
int main(){
    int n,r;
    cin >> n >> r;
    if(r > n){
        cout << 0;
    }
    else 
        cout << combination(n, r);
}
