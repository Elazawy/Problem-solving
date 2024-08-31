// Problem name: Combination and Permutation
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/L
// Memory limit : 256
// Time limit : 1000
// Start: Thu Aug 31 2024 

// Used libraries
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pascal_triangle[n][n];
    pascal_triangle[0][0] = 1;
    pascal_triangle[1][0] = 1;
    pascal_triangle[1][1] = 1;

    cout << 1 << ' ' << endl;
    if(n>=2){
        cout << 1 << ' ' << 1 << ' ' << endl;
    }
    if(n>2){
        for (int i = 2; i < n; i++){
            cout << 1 << ' ';
            pascal_triangle[i][0] = 1;
            for(int j = 1;j < i; j++){
                pascal_triangle[i][j]= pascal_triangle[i-1][j-1] + pascal_triangle[i-1][j];
                cout << pascal_triangle[i][j] << ' ';
            }
            cout << 1 << ' ';
            pascal_triangle[i][i] = 1;
            cout << endl;
            
        }
        
    }
}