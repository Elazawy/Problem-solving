// Problem name : Palindrome Replace
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A
// time limit : 1 
// memory limit 256
// Date : Sat Sep 28 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    string s;
    cin >> s;
    bool is_palindrome = true;
    for (int i = 0; i < s.size()/2; i++)
    {
        if(s[s.size() - i - 1] != s[i] && s[i] != '?' && s[s.size() - i - 1] != '?'){
            is_palindrome = false;
            break;
        }
        else if(s[i] == '?' && s[s.size() - i - 1]== '?'){
            s[i] = s[s.size() - i - 1] = 'a';
        }
        else if(s[i] == '?' && isalpha(s[s.size() - i - 1])){
            s[i] = s[s.size() - i - 1];
        }
        else {
            s[s.size() - i - 1] = s[i];
        }
    }
    if(s.size() % 2 != 0){
        if(s[s.size()/2] == '?'){
            s[s.size()/2] = 'a';
        }
    }
    if(is_palindrome){
        cout << s;
    }
    else {
        cout << -1;
    }
}