// Problem name : Decoding
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Z
// Time limit : 1
// Memory limit : 256
// Date : Mon Nov 11 2024
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.length() < 3){
        cout << s;
    }
    else {
        for (int i = s.length()-2; i >0; i-=2) 
        {
            cout << s[i];
        }
        cout << s[0];
        if(n%2==0){
            for (int i = 1; i < s.length(); i+=2)
            {
                cout << s[i];
            }
        }
        else {
            for (int i = 2; i < s.length(); i+=2)
            {
                cout << s[i];
            }
        }
    }
}