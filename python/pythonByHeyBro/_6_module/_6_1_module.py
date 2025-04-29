# module = a file containing code you want to include in your program
#          use 'import' to include a module (built-in or your own)
#          useful to break a program in reusable separate file

# print(help(modules))
# print(help(math))

import math as m  # shortcut . here m can be anything

print(f"{m.pi:.2f}")

# another way is
# from math import pi
# here we can just write
# print(pi)

# from custom module
import _6_2_customModule as cm

print(f"new pi value: {cm.newPi}")
print(f"a to the power b: {cm.powerOf(2, 3)}")
print(f"sum of a and b: {cm.summation(2, 3)}")
