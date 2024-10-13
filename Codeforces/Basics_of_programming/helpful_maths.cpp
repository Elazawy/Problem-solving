// Problem name : Helpful Maths
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/T
// Time limit : 2
// Memory limit : 256
// Date : San Oct 13 2024 

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> freq(3, 0);
    for (int i = 0; i < s.size(); i+=2)
    {
        freq[s[i]-'1']++;
    }
    // 1
    for (int i = 0; i < freq[0]-1; i++)
    {
        cout << 1 << '+';
    }
    if(freq[0] > 0) cout << 1;
    // 2
    if(freq[1] > 0 && freq[0] > 0){
        cout << '+';
        for (int i = 0; i < freq[1]-1; i++)
        {
            cout << 2 << '+';
        }
        cout << 2;
    }
    else if(freq[1] > 0){
        for (int i = 0; i < freq[1]-1; i++)
        {
            cout << 2 << '+';
        }
        cout << 2;
    }
    // 3
    if(freq[2] > 0 && (freq[0] > 0 || freq[1] > 0)){
        cout << '+';
        for (int i = 0; i < freq[2]-1; i++)
        {
            cout << 3 << '+';
        }
        cout << 3;
    }
    else if(freq[2] > 0){
        for (int i = 0; i < freq[2]-1; i++)
        {
            cout << 3 << '+';
        }
        cout << 3;
    }
}
