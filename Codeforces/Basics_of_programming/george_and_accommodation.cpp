// Problem name : George and Accommodation
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/E
// time limit : 1 
// memory limit 256
// Date : Sun Sep 29 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int n_rooms;
    cin >> n_rooms;
    int moving_rooms = 0;
    while (n_rooms--)
    {
        int p,q;
        cin >> p >> q;
        if(q - p >= 2) moving_rooms++;
    }
    cout << moving_rooms;
}