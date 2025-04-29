# static method = belongs to a class rather than any object to that class (instance)
#                 Usually used for general utility functions

# instance method = best for operation on instances of the class (objects)
# static method= best for utility functions that do not need to access to data

class Employee:
    def __init__(self, name, position):
        self.name = name
        self.position = position

    def getInfo(self):
        return f"{self.name} = {self.position}"

    @staticmethod
    def is_valid_position(position):
        valid_positions = ["Manager", "Cook", "Cashier", "Janitor"]
        return position in valid_positions


print(Employee.is_valid_position("Rocket Scientist"))
