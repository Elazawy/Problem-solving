// Problem name : prime factors
// URL: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/J
// Memory limit : 256
// Time limit : 1000
// Start: Thu Aug 30 6:40:00 2024 
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() 
{
    int n;
    cin >> n;
    int print_sympol = false;
    for (int i = 2; i < n; i++){
        int power = 0;
        while(n%i==0){
            power++;
            n/=i;
        }
        if(power>0&&!print_sympol){
            cout << '(' << i << '^' << power << ')';
            print_sympol = true;
        }
        else if(power>0&&print_sympol){
            cout << "*(" << i << '^' << power << ')';
        }
    }
    if(n>1&&print_sympol){
        cout << "*(" << n << '^' << 1 << ')';
    }
    else if(n>1&&!print_sympol){
        cout << '(' << n << '^' << 1 << ')';
    }
}