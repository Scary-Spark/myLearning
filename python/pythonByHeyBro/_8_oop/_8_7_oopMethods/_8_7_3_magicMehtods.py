# magic methods = Dunder methods (double underscore) __init__, __str__ , __eq__
#                 they are automatically called by many python built-in operations
#                 they allow developers to define or customize the behaviour of objects

class Students:
    def __init__(self, name, gpa):
        self.name = name
        self.gpa = gpa

    def __str__(self):
        return f"name: {self.name} and gpa: {self.gpa}"

    def __eq__(self, other):
        return self.gpa == other.gpa

    def __lt__(self, other):
        return self.gpa < other.gpa

    # same as: __gt__ (greater than), __add__ (add 2 nums), __contains__ (find anything)


s1 = Students("Tamim", 2.45)
s2 = Students("Musfiq", 2.24)
s3 = Students("Mahmudullah", 3.4)

print(s1)  # before we see that if we call this way it will print memory address, but now it's calling __str__
print(s1 == s2)
print(s2 < s3)
