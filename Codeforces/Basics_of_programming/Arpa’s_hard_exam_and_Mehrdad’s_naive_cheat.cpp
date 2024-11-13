// Problem name : Arpa’s hard exam and Mehrdad’s naive cheat
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/B
// Time limit : 1
// Memory limit : 256
// Date : Wed Nov 13 2024
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==0) cout << 1;
    else {
        switch (n%4)
        {
        case 1:
            cout << 8;
            break;
        case 2:
            cout << 4;
            break;
        case 3:
            cout << 2;
            break;
        
        default:
            cout << 6;
            break;
        }
    }
}