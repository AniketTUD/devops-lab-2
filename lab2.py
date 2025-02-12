NUMBERS = 6

nums = [5, 2, 6, 64, 15, 10]

largest = nums[0]
smallest = nums[0]

for num in nums:
    if largest < num:
        largest = num
    if smallest > num:
        smallest = num

print(f"Largest Number in list: {largest}")
print(f"Smallest Number in list: {smallest}")

