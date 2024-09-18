// Problem name : Pyramid
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G
// Date : Wed Sep 18 2024
// time limit : 1
// memory limit 256

#include<iostream>
using namespace std;

void pyramid(int n, int c = 1){
    if(n > 0){
        int s = n - 1;
        while(s--){
            cout << ' ';
        }
        int cc = c;
        while(cc--){
            cout << '*';
        }
        cout << endl;
        pyramid(n-1, c += 2);
    }
}
 
int main() {
    int n;
    cin >> n;
    pyramid(n);
}