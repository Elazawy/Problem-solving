// Problem name: Combination and Permutation
// URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/K
// Memory limit : 256
// Time limit : 1000
// Start: Thu Aug 30 2024 

// Used libraries
#include<iostream>
using namespace std;

long long factorial(int num){ // This function calculat the fuctorial for a number.
    long long factorial = 1;
    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}
long long permutation(int A, int B){ // This function calculate the permutation of A and B.
    return factorial(A) / factorial(A-B);
}
long long combintaion(int A, int B){ // This function calculate the combintaion of A and B.
    return permutation(A,B) / factorial(B);
}
int main(){
    int A,B;
    cin >> A >> B;
    cout << combintaion(A,B) << ' ' << permutation(A,B);
}