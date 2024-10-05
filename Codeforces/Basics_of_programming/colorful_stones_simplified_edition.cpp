// Problem name : Colorful Stones (Simplified Edition)
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/I
// time limit : 2
// memory limit 256
// Date : Sat Oct 5 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
bool first_is_distinct(vector<string> &sequence, char c){
    for (int i = 0; i < sequence.size(); i++)
    {
        if(sequence[i][0] == c) 
            return false;
    }
    return true;
}
int main(){
    string s,t;
    cin >> s >> t;
    int pos = 0;
    for (int i = 0; i < t.size() && pos < s.size(); i++)
    {
        if(s[pos] == t[i]) pos++;
    }
    cout << pos+1;
}