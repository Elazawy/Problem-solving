// Problem name : Circles
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/W
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
    double c1x = (x1 + x2) / 2;
    double c1y = (y1 + y2) / 2;
    double r1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) / 2;
    double c2x = (x3 + x4) / 2;
    double c2y = (y3 + y4) / 2;
    double r2 = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2)) / 2;
    double dis = sqrt(pow((c2x - c1x),2 ) + pow((c2y - c1y), 2)); // dis -> Distance between the two circles
    if((dis > (r1 + r2))){
        cout << "NO";
    }
    else {
        cout << "YES";
    }

}