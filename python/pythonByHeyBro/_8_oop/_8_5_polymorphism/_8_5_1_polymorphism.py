# polymorphism = is a greek word that mean it has many faces or many
#                poly means many
#                morphism means forms
#                two ways to achieve polymorphism
#                   1. Inheritance = An object could be treated as the same type as a parent class
#                   2. Duck Typing = Object must have necessary attributes/methods

from abc import abstractmethod


class Shape:
    @abstractmethod
    def area(self):
        pass


class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14 * pow(self.radius, 2)


class Square(Shape):
    def __init__(self, width):
        self.width = width

    def area(self):
        return pow(self.width, 2)


class Triangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height * 0.5


class Pizza(Circle):
    def __init__(self, topping, radius):
        super().__init__(radius)
        self.topping = topping


shapes = [Circle(4), Square(5), Triangle(6, 7), Pizza("Peperroni", 15)]

for shape in shapes:
    print(f"area is : {shape.area()}")
