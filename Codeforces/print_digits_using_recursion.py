# Problem name : Print digits using Recursion
# URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/d
# Date : Mon sep 16 2024
# Time limit: 1
# Memory limit : 256

t = int(input())
for i in range(t):
    n = input()
    for char in n:
        print(char, end=' ')
    print()