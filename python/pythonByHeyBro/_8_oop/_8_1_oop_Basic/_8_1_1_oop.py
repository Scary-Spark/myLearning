# object = is a bundle of related attributes(variables) and method(functions)
#          ex. phone, book, cup etc
#          you need to create a class to create object
# method = a method is a function that belongs to an object
# class = (blueprint) used to design the structure and layout of an object

import _8_1_2_oop_car as c

c1 = c.Car("Mustang", 2024, "Blue", False)

print(f"memory address of car1: {c1}")
c1.displayDetails()
print()

c2 = c.Car("Ferrary", 2020, "Red", True)
print("Car c2")
c2.displayDetails()
