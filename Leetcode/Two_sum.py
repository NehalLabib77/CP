nums = list(map(int, input().split()))
print(nums)

target = int(input())
print(target)

i = 0

for i in nums:

    if nums[i] + nums[i+1] == target:
        print(nums[i, i+1])

    i+1
