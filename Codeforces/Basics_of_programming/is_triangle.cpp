// Problem name : Is Triangle
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/S
// time limit : 1
// memory limit : 256
// Date : 

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if((a + b <= c) || (a + c <= b) || (b + c <= a)){
        cout << "Invalid";
    }
    else {
        cout << "Valid" << endl;
        double hp = (a + b + c)/2; // hp -> the half of the perimeter
        double area = sqrt(hp * (hp - a) * (hp - b) * (hp - c));
        cout << setprecision(8) << area;
    }
}