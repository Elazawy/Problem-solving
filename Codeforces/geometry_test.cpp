// Problem name : Geometry Test
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Z
// Date : Sun Sep 15 2024
// time limit : 1
// memory limit 256

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int r,s;
    cin >> r >> s;
    if(2 * r <= s) {
        cout << "Square";
    }
    else if(sqrt(2) * s <= 2 * r){
        cout << "Circle";
    }
    else {
        cout << "Complex";
    }
}