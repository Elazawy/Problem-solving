// Problem name : Drawing Task
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/A
// Time limit : 1
// Memory limit : 256
// Date : Thu Nov 12 2024
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,q;
    cin >> n >> m >> q;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j < m; j++){
            arr[i][j] = '.';
        }
    }
    while(q--){
        int r1,c1,r2,c2;
        char c;
        cin >> r1 >> c1 >> r2 >> c2 >> c;
        for (int i = min(r1,r2)-1; i < max(r1,r2); i++)
        {
            for(int j = min(c1,c2)-1; j < max(c1,c2); j++){
                arr[i][j] = c;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j < m; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}