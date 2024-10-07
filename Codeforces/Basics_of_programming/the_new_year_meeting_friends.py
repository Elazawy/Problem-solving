# Problem name : The New Year: Meeting Friends
# Time limit : 1
# Memory limit : 256
# Date : Mon Oct 7 2024
nums = list(map(int, input().split()))

if nums[0] == nums[1] and nums[1] == nums[2]:
    print(0)
else:
    print(max(nums[0], nums[1], nums[2]) - min(nums[0], nums[1], nums[2]))