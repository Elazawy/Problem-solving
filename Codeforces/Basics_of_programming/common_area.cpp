// Problem name : Common Area
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Y
// Date : Sun Sep 15 2024
// time limit : 1
// memory limit 256

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    int i = 1;
    while(t--){
        int n;
        cin >> n;
        int x1,y1,x2,y2;
        int x_min = -10000, x_max = 10000;
        int y_min = -10000, y_max = 10000;
        while(n--){
            cin >> x1 >> y1 >> x2 >> y2;
            x_min = max(x_min, x1);
            x_max = min(x_max, x2);
            y_min = max(y_min , y1);
            y_max = min(y_max, y2);
        }
        long long comm_area;
        if(x_max < x_min || y_max < y_min){
            comm_area = 0;
        }
        else {
            comm_area = (x_max - x_min) * (y_max - y_min);
        }
        cout << "Case #" << i << ": "  << comm_area << endl;
        i++;
    }
}