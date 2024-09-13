// Problem name : Straight Line
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/U
// Date : Thu Sep 12 2024
// time limit : 1
// memory limit 256

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int determinant = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if(determinant == 0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}