// Problem name : Lucky Division
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/J
// Time limit : 2
// Memory limit : 256
// Date : Sun Oct 6 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
bool is_from_7_4(int num){
    int mod;
    while(num > 0){
        mod = num%10;
        if(mod != 7 && mod != 4) return false;
        num/=10;
    }
    return true;
}
int main(){
    int n; 
    cin >> n;
    for (int i = 4; i <= n; i++)
    {
        if(n % i == 0 && is_from_7_4(i)){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}