// Problem name : The maximum path-sum
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X
// time limit : 1
// memory limit 256
// Date : Thu Sep 26 2024
 
#include<iostream>
#include<vector>
#include<iomanip>
#define ll long long
using namespace std;
 
ll max_sum(int n, int m, vector<vector<int>> &matrix, int index_row = 0, int index_col = 0){
    if(index_row >= n || index_col >= m) return -1e9;
    if(index_row == n - 1 && index_col == m - 1) return matrix[index_row][index_col];
    return matrix[index_row][index_col] + max(max_sum(n, m, matrix, index_row+1, index_col), 
        max_sum(n, m, matrix, index_row, index_col+1));
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m,0));
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    cout << max_sum(n, m, matrix);
}