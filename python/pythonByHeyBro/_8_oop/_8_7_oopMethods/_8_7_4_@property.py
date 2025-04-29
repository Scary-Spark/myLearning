# property = Decorator use to define a method as a property (it can be accessed like an attribute)
#           Benefit: add additional logic when read, write or delete attribute
#           gives you getter, setter, and deleter method

class Rectangle:
    def __init__(self, width, height):
        self._width = width  # adding _width makes them protected, it only be accessible inside class
        self._height = height

    @property
    def width(self):
        return f"width is: {self._width:.1f}cm"

    @property
    def height(self):
        return f"height is: {self._height:.1f}cm"

    @width.setter
    def width(self, new_width):
        if new_width > 0:
            self._width = new_width
        else:
            print("Width must be greater than 0")

    @height.setter
    def height(self, new_height):
        if new_height > 0:
            self._height = new_height
        else:
            print("Height must be greater than 0")

    @width.deleter
    def width(self):
        del self._width
        print("Width has been deleted")

    @height.deleter
    def height(self):
        del self._height
        print("Height has been deleted")


rectangle = Rectangle(2.8734, 3.2354)
print(f"{rectangle.width}")
print(f"{rectangle.height}")
print()

rectangle.width = 5.24654
rectangle.height = 6.232345
print("New")

print(f"{rectangle.width}")
print(f"{rectangle.height}")
print()

del rectangle.width
del rectangle.height
print("New")
