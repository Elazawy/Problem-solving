// Problem name : Invert Pyramid
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H
// Date : Wed Sep 18 2024
// time limit : 1
// memory limit 256
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void invert_pyramid(int n, int c = 0){
    if(n > 0){
        int cc = c;
        while(cc--){
            cout << ' ';
        }
        int n_stars = 2 * n - 1;
        while (n_stars--)
        {
            cout << '*';
        }
        cout << endl;
        invert_pyramid(n-1, c+1);
    }
}

int main() {
    int n;
    cin >> n;
    invert_pyramid(n);
}
