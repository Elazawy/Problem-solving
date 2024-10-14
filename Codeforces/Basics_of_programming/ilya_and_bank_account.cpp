// Problem name : Ilya and Bank Account
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/U
// Time limit : 2
// Memory limit : 256
// Date : Mon Oct 14 2024 

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    string n;
    cin >> n;
    if(stoi(n) > 0){
        cout << n;
    }
    else {
        if((n[n.size()-1] - '0') >= (n[n.size()-2] - '0')){
            n.pop_back();
        }
        else {
            n.erase(n.size()-2, 1);
        }
        if(n == "-0") cout << 0;
        else cout << n;
    }
}
