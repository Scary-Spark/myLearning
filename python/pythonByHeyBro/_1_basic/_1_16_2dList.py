fruits = ["apple", "orange", "banana", "coconut"]
vegetables = ["celery", "potatoes", "carrots"]
meats = ["chicken", "fish", "turkey"]

groceries = [fruits, vegetables, meats]
print(groceries)

print(f"at index 0: {groceries[0]}")
print(f"at index 1: {groceries[1]}")
print(f"at index 3: {groceries[2]}")

print(f"value at 0,1: {groceries[0][1]}")

for collection in groceries:
    print("row : ", end=" ")
    for value in collection:
        print(value, end=", ")
    print()
