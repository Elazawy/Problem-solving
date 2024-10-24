// Problem name : Is it rated?
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/V
// Time limit : 2
// Memory limit : 256
// Date : Tue Oct 22 2024

#include<iostream>
#include<vector>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int x = 0;
        bool turn = 1;
        for (int i = 1; (x <= n && x>=0) || (x<=0 && -n<=x); i++)
        {
            if(turn){
                x -= ((2*i)-1);
                turn = 0;
            }
            else if(!turn){
                x += ((2*i)-1);
                turn = 1;
            }
        }
        if(!turn){
            std::cout << "Sakurako" << std::endl;
        }
        else if(turn){
            std::cout << "Kosuke" << std::endl;
        }
    }
}