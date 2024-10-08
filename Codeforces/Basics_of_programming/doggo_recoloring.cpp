// Problem name : Doggo recoloring
// URL : https://codeforces.com/group/isP4JMZTix/contest/380288/problem/J
// Time limit : 1
// Memory limit : 256
// Date : Tue Oct 8 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;  

int main(){
    int n;
    cin >> n;
    string colors;
    cin >> colors;
    if(n == 1) {
        cout << "Yes";
        return 0;
    }
    vector<int> freq_colors(26, 0);
    for (int i = 0; i < n; i++)
    {
        freq_colors[colors[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(freq_colors[i] > 1){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}