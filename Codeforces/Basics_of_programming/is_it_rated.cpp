// Problem name : Is it rated?
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/V
// Time limit : 2
// Memory limit : 256
// Date : Tue Oct 22 2024

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][2];
    string comp = "maybe";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
        if(arr[i][1] != arr[i][0]){
            comp = "rated";
        }
    }
    if(comp == "rated"){
        cout << comp;
        return 0;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i][0] < arr[i+1][0]){
        cout << "unrated";
        return 0; 
        }
    }
    cout << comp;
}