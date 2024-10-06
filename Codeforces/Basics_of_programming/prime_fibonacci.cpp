// Problem name : Prime Fibonacci
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/K
// Time limit : .25
// Memory limit : 256
// Date : Sun Oct 6 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;  

bool is_prime(ll n){
    if(n <= 1) return false;
    if(n == 2 || n == 3) return true;
    if(n%2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    int num_cases;
    cin >> num_cases;
    vector<bool> prime_or_not(51);
    vector<ll> fibos(51);
    fibos[1] = 0;
    fibos[2] = 1;
    for (int i = 3; i <= 50; i++){
        fibos[i] = fibos[i-1] + fibos[i-2];
        prime_or_not[i] = is_prime(fibos[i]);
    }
    while (num_cases--)
    {
        int n;
        cin >> n;
        if(prime_or_not[n]){
            cout << "prime" << endl;
        }
        else {
            cout << "not prime" << endl;
        }
    }
}