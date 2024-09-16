# Problem name : Print from 1 to N
# URL : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
# Date : Mon sep 16 2024

def print_to_n(n : int, i : int):
    if n > 0:
        print(i)
        i += 1
        print_to_n(n - 1, i)

n = int(input())
print_to_n(n , 1)