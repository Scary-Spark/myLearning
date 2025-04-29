# *args = allows you to pass multiple non-keys arguments
# **kwargs = allows you to pass multiple keyword-arguments
#            * unpacking operator

def add(*args):  # args is just a name. it can be define with anything like *nums, *elements
    total = 0
    print(f"Type is: {type(args)}")
    for arg in args:
        total += arg
    return total


print(f"sum is: {add(1, 2, 3)}")  # sending as a tuple
print()


def printAddress(**kwargs):
    print(f"Typs is: {type(kwargs)}")
    for key, value in kwargs.items():
        print(f"{key}: {value}")


printAddress(street="123 Fake Street",
             city="Unknow City",
             state="Us",
             zip="23454")  # sending as a dictionary
print()


def shipping_label(*args, **kwargs):
    print(f"type: {type(args)}")
    for arg in args:
        print(arg, end=" ")
    print()

    print(f"type: {type(kwargs)}")
    for key, value in kwargs.items():
        print(f"{key}: {value}")


shipping_label("Dr.", "Songbobe", "Squrenpants", "III",
               street="123 Fake Street",
               city="Unknow City",
               state="Us",
               zip="23454"
               )

# note keywords arguments should follow position arguments
