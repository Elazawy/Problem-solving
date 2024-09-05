// Problem name: M. Divisible
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/M
// Memory limit : 256
// Time limit : 1000
// Date: thur Sep  5 2024 

// Used libraries
#include<iostream>
using namespace std;


int main(){
    string N;
    int x;
    cin >> N >> x;
    long long remindar = 0;
    for(char digit : N){
        remindar = (remindar*10 + (digit - '0')) % x;
    }
    if(remindar==0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
