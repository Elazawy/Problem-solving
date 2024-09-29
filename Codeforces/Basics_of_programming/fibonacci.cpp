// Problem name : Fibonacci
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O
// time limit : 1
// memory limit 256
// Date : Mon Sep 23 2024

#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n){
    if(n == 1) return 0;
    else if (n == 2) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    cin >> n;
    cout << fibonacci(n);
}