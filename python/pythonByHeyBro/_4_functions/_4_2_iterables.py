# iterables = ab object/collections that can return it's elements one at a time,
#             allowing it to be iterated over time

nums = [1, 2, 3, 4, 5]
for n in nums:  # here n is the iterable
    print(n, end=" - ")
print()

for n in reversed(nums):
    print(n, end=" - ")
print()

# list, tuple can be reversed. but we can't reverse sets
