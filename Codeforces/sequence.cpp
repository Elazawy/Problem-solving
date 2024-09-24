// Problem name : 3n + 1 sequence

// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q
// time limit : 1
// memory limit 256
// Date : Tue Sep 24 2024

#include<iostream>
#include<vector>
using namespace std;

long long sequence(int n, long long len = 1){
    if(n != 1){
        if(n % 2 == 0){
            n /= 2; 
        }
        else {
            n = (3 * n) + 1;
        }
        len++;
        return sequence(n, len);
    }
    return len;
}
int main(){
    int n;
    cin >> n;
    cout << sequence(n);
}