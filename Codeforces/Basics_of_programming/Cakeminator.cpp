// Problem name : Cakeminator
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/N
// Time limit : 1
// Memory limit : 256
// Date : Wed Oct 9 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;  

int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<char>> cake(r, vector<char>(c));
    vector<int> safe_rows(r, 0);
    vector<int> safe_cols(c, 0);
    int num_safe_rows = 0;
    int n_safe_cells = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> cake[i][j];
            if(cake[i][j] == 'S'){
                safe_rows[i] = 1;
                safe_cols[j]  = 1;
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        if(!safe_rows[i]){
            n_safe_cells += c;
            num_safe_rows++;
        }
    }
    for (int i = 0; i < c; i++)
    {
        if(!safe_cols[i]){
            n_safe_cells += r;
            n_safe_cells -= num_safe_rows;
        }
    }
    cout << n_safe_cells;
}