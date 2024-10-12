// Problem name : Good Number
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/S
// Time limit : 1
// Memory limit : 256
// Date : Sat Oct 12 2024 

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int n_goods = 0;
    string order = "";
    for (int i = 0; i <= k; i++){
        order += ('0' + i);
    }
    while(n--){
        string num;
        cin >> num;
        string c_order = order;
        for (int i = 0; i < num.size() && c_order.size() > 0; i++)
        {
            size_t pos = c_order.find(num[i]);
            if(pos != string::npos){
                c_order.erase(pos, 1);
            }
        }
        if(c_order.empty()) n_goods++;
    }
    cout << n_goods;
}
