# Decorator = A function that extends the behaviour of another functions
#             without modifying the base function
#             pass the base function as an argument to the operator
def add_sprinkles(func):
    def wrapper(*args, **kwargs):  # these 3 line return a full function
        print("You add sprinkles")
        func(*args, **kwargs)

    return wrapper


@add_sprinkles
# multiple decorator can be added
def get_ice_cream(flavour):
    print(f"Here is your {flavour} ice cream")


get_ice_cream("vanilla")
