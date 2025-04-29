# super() = Function used in a child class to call methods from a parent class(super class)
#           Allowed to extend the functionality of the inherited methods

class Shape:
    def __init__(self, color, is_filled):
        self.color = color
        self.is_filled = is_filled

    def describe(self):
        print(f"This is {'filled' if self.is_filled else 'not filled'} with {self.color} color")


class Circle(Shape):
    def __init__(self, color, filled, radius):
        super().__init__(color, filled)
        self.radius = radius


class Square(Shape):
    def __init__(self, color, filled, width):
        super().__init__(color, filled)
        self.width = width

    def describe(self):
        super().describe()  # calling the describe method of superclass
        print(f"This is a square of width: {self.width}")


class Triangle(Shape):
    def __init__(self, color, filled, width, height):
        super().__init__(color, filled)
        self.radius = width
        self.height = height


circle = Circle(color="Red", filled=True, radius=5)
triangle = Triangle("White", False, 3, 4)
square = Square("Blue", True, 2)

circle.describe()
triangle.describe()
print()

# if a child has the same method as parent, it will overwrite the parent method with it's own method
print("method overwrite: ")
square.describe()
