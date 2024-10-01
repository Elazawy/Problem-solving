// Problem name : Spy Detected!
// URL : https://codeforces.com/group/isP4JMZTix/contest/380288/problem/D
// time limit : 2
// memory limit 256
// Date : Tue Sep 30 2024 

#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    int num_cases;
    cin >> num_cases;
    while(num_cases--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums.at(i);
        }
        if(nums.at(0) != nums.at(1) && nums.at(0) != nums.at(2)){
            cout << 1;
        }
        else if (nums.at(n-1) != nums.at(n-2) && nums.at(n-1) != nums.at(n-3)){
            cout << n;
        }
        else {
            for (int i = 1; i < n-1; i++)
            {
                if(nums.at(i) != nums.at(i-1) && nums.at(i) != nums.at(i+1)){
                    cout << i+1;
                    break;
                }
            }
            
        }
        cout << endl;
    }
}