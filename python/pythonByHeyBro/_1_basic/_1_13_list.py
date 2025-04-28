# list = [] ordered and changebale, duplicate is ok
fruitsList = ["apple", "banana", "orange"]
print(fruitsList)

print(f"first element is: {fruitsList[0]}")
print(f"element from index 1 to 2: {fruitsList[0:2]}")  # if(x:y) then from x to y-1 index

print(f"reverse list: {fruitsList[::-1]}")

for x in fruitsList:
    print(x, end=" ")
print()

print(f"length of the fruit: {len(fruitsList)}")
print(f"if apple in there: {"apple" in fruitsList}")

fruitsList.append("new appended fruit")
print(fruitsList)

fruitsList.remove("apple")
print(f"after removing apple: {fruitsList}")

fruitsList.insert(2, "avocado")
print(f"adding avocado at index 2: {fruitsList}")

fruitsList.sort()
print(f"after sorted: {fruitsList}")

fruitsList.reverse()
print(f"after reverse: {fruitsList}")

print(f"index of avocado: {fruitsList.index("avocado")}")

fruitsList.append("banana")
print(f"total banana count: {fruitsList.count("banana")}")

print(f"remove all the elements: {fruitsList.clear()}")

# print("All the functions")
# print(dir(fruitsList))

# print(help(fruitsList))
