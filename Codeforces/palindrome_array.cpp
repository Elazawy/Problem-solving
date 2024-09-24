// Problem name : Palindrome Array
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
// time limit : 1
// memory limit 256
// Date : Tue Sep 24 2024

#include<iostream>
#include<vector>
using namespace std;

bool is_palindrome(int n, vector<int> &arr,int pos = 0){
    if(pos < n/2){
        if(arr[pos] != arr[n-pos-1]){
            return false;
        }
        return is_palindrome(n , arr, pos+1);
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(is_palindrome(n, arr)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
