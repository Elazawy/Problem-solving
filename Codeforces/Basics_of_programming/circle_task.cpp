// Problem name : Circle Task
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/T
// Date : Thu Sep 12 2024
// time limit : 1
// memory limit 64

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int xc,yc,r,m;
    cin >> xc >> yc >> r >> m;
    while(m--){
        int x,y;
        cin >> x >> y;
        double distance = sqrt(pow((x - xc) , 2) + pow((y - yc) , 2));
        if(distance > r){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}