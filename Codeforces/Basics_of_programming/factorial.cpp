// Problem name : Factorial
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
// Date : Fri Sep 20 2024
// time limit : 1
// memory limit 64
# define ll long long
#include<iostream>
#include<cmath>
using namespace std;

ll factorial(int n , ll fact = 1){
    if(n > 1){
        fact *= n;
        return factorial(n-1, fact);
    }
    return fact;
}
int main(){
    int n;
    cin >> n;
    cout << factorial(n);
}