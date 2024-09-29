// Problem name : Two Lines
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/V
// Date : Fri Sep 13 2024
// time limit : 1
// memory limit 256

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double x3,x4,y3,y4;
    cin >> x3 >> y3 >> x4 >> y4;
    if(x1 - x2 == 0 && x3 - x4 == 0){
        cout << "YES";
    }
    else if((x1 - x2 == 0 && x3 - x4 != 0) || (x1 - x2 != 0 && x3 - x4 == 0))
    {
        cout << "NO";
    }
    else {
        double slope_1 = (y1 - y2) / (x1 -x2);
        double slope_2 = (y3 - y4) / (x3 - x4);
        if (slope_1 == slope_2){
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
}