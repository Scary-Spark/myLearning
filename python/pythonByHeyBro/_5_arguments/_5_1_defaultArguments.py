# default arguments= a default value for certain parameters
#     default is used when a argument is omittd
#     make your functions more flexible, reduces # of arguments
#     1. positional
#     2. DEFAULT
#     3. keyword
#     4. arbitrary

def net_price(list_price, discount=0, tax=0.05):  # adding default value to discount and tax
    return list_price * (1 - discount) * (1 + tax)


# print(f"net price is: {net_price(500, 0, 0.05)}")
print(f"net price is: {net_price(500)}")
print(f"net price is: {net_price(500, 0, 0.78)}")

# note: non default arguments should be followed by default arguments meaning;
# if we declare any default arguments then rest of the arguments after that also should be default
# i.e we can write: def newArg(name, age=19, cgpa=3.5)
# but we can't write: def newArg(name, age=13, cgpa) here cgpa also should be default
# rather we can write: def newArg(name, cgpa, age=12)
