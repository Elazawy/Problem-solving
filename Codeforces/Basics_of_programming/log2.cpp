// Problem name : Log2
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P
// time limit : 1
// memory limit 256
// Date : Mon Sep 23 2024

#include<iostream>
#include<vector>
using namespace std;

int log2(long long num, int res = 0){
    if(num > 1){
        num /= 2;
        res++;
        return log2(num, res);
    }
    return res;
}
int main(){
    long long n;
    cin >> n;
    cout << log2(n);
}