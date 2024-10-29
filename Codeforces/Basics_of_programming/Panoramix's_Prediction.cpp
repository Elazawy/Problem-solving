// Problem name : Panoramix's Prediction
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/X
// Time limit : 2
// Memory limit : 256
// Date : Tue Oct 29 2024 

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include<algorithm>
#include<math.h>
using namespace std;

bool is_prime(int n){
    if(n == 2) return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    int n,m;
    cin >> n >> m;
    int next_prime;
    for (int i = n+1; true; i++)
    {
        if(is_prime(i)){
            next_prime = i;
            break;
        }
    }
    if(next_prime==m && is_prime(n)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
