# set = {} unordered and immutable, but add remove ok, but no duplicate
# unordered means if we print it, it will randomly print elements
# it means we can't directly access any index; sets[0]
# also we can't change any elements, as it index can't accessible

fruitsList = {"apple", "banana", "orange"}
print(f"sets of fruits: {fruitsList}")

print(f"remove a random element at index 0: {fruitsList.pop()}")
print(fruitsList)
