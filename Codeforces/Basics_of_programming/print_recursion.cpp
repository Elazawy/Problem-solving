// Problem name : Print Recursion
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
// Date : Sun Sep 15 2024
// time limit : 1
// memory limit 256

#include<iostream>
#include<cmath>

using namespace std;

void rec(int n){
    if(n > 0){
        cout << "I love Recursion" << endl;
        rec(n-1);
    }
}
int main(){
    int n;
    cin >> n;
    rec(n);
}