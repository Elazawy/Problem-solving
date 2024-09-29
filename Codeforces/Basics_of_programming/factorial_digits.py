# Problem name : Factorial digits
# URL : https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/P
# Date : Mon sep 9 2024

import math

N = int(input())
sum_of_logs = 0

for i in range(1, N+1):
    sum_of_logs += math.log10(i)
num_digits = math.floor(sum_of_logs) + 1
print(f"Number of digits of {N}! is {num_digits}")
