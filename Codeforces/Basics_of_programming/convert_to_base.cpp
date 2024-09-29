// Problem name: Convert to Base
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/N
// Memory limit : 256
// Time limit : 1000
// Date: Mon Sep  7 2024 

// Used libraries
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int chartoval(char c){
    c = toupper(c);
    return int(c - 55);  // Convert 'A' to 10, 'B' to 11, etc.
}

char valtochar(int val){
    return char(val + 55);  // Convert 10 to 'A', 11 to 'B', etc.
}

void converttobase(string n ,int t , int x){
    if(t == 1){
        long long n_decimal = 0;
        for(int i = n.size() - 1; i > -1; i--){
            if(isalpha(n[i])){
                n_decimal += (chartoval(n[i]) * pow(x, n.size() - 1 - i));
            }
            else {
                n_decimal += (int(n[i] - '0') * pow(x, n.size() - 1 - i));
            }
        }
        cout << n_decimal;
    } 
    else if(t == 2) {
        long long decimal_int = stoll(n);
        string result = "";
        int remainder = 0;
        while(decimal_int > 0){
            remainder = decimal_int % x;
            decimal_int /= x;
            if(remainder < x){
                if(remainder < 10){
                    result += char(remainder + '0');
                }
                else if(remainder > 9) {
                    result += valtochar(remainder);
                }
            }
            else if(remainder>=x){
                remainder -= x;
                if(remainder < 10){
                    result += char(remainder + '0');
                }
                else if(remainder > 9) {
                    result += valtochar(remainder);
                }
            }
        }
        if(result.empty()) result = '0';
        reverse(result.begin(), result.end());
        cout << result;
    }
}

int main(){
    int t, x;
    string n;
    cin >> t >> n >> x;
    converttobase(n, t, x);
}
