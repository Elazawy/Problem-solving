// Problem name : Sum of a Matrix
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N
// time limit : 1
// memory limit 256
// Date : Mon Sep 23 2024

#include<iostream>
#include<vector>
using namespace std;

void sum_matrix(int r, int c, vector<vector<int>> &matrix_1, vector<vector<int>> &matrix_2, int rec_row = 0, int rec_col = 0){
    if(rec_row < r){
        if(rec_col < c){
            cout << matrix_1[rec_row][rec_col] + matrix_2[rec_row][rec_col] << ' ';
            sum_matrix(r, c, matrix_1, matrix_2, rec_row, rec_col+1);
        }
        else {
            cout << endl;
            sum_matrix(r, c, matrix_1, matrix_2, rec_row+1, 0);
        }
    }
}
int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<int>> matrix_1(r, vector<int>(c, 0)), matrix_2(r, vector<int>(c, 0));
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++){
            cin >> matrix_1[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++){
            cin >> matrix_2[i][j];
        }
    }
    sum_matrix(r, c, matrix_1, matrix_2);
}