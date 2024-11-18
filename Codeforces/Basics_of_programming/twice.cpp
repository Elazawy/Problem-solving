// Problem name : Twice
// URL : https://codeforces.com/contest/2037/problem/A
// Time limit : 1
// Memory limit : 256
// Date : Sun Nov 17 2024
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int freq[21] = {0};
        int score = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        for (int i = 0; i < 21; i++)
        {
            score += (freq[i]/2);
        }
        cout << score << endl;
    }
}