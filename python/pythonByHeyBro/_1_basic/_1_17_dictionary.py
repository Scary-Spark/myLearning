# dictionary = a collection of {key: value} pairs, ordered and changeable, no duplicates

capitals = {"USA": "Washington DC",
            "India": "New Delhi",
            "Bangladesh": "Dhaka",
            "Pakistan": "Islamabad"
            }

print(f"Capital of usa: {capitals.get("USA")}")

for country in capitals:
    print(f"Capital of {country} is: {capitals.get(country)}")

capitals.update({"Germany": "Berlin"})
print(capitals)

capitals.popitem()  # remove the last element
print(f"new list: {capitals}")

keys = capitals.keys()
print(f"All the key: {keys}")

print("Keys: ", end="")
for key in capitals.keys():
    print(key, end=" ")
print()

print("Values: ", end="")
for value in capitals.values():
    print(value, end=", ")
print()

items = capitals.items()
for key, value in capitals.items():
    print(f"{key}: {value}")
