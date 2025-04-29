# keyword arguments= an argument proceeded by an identifier
#                    helps with readability
#                    order of the arguments doesn't matter

def hello(greetings, title, firstName, lastName):
    print(f"{greetings} {title}{firstName} {lastName}")


hello("hello", lastName="Spark", title="Mr.", firstName="Scary")
# here we already assign the value of each parameter
# as a result the order of the parameter doesn't matter in here

# note position arguments followed by keyword arguments.
# meanin we have to write down the position argument first then the keyword arguments
