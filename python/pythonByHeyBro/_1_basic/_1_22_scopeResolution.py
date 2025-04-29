# scope resolution = (LEGB) local-> enclosed-> global-> built-in
# in short global and local variable
# enclosed mean function insinde function

# local
def fun1(a):
    print("a is: ", end="")
    print(a)


def fun2(b):
    print("b is: ", end="")
    print(b)
    # print(a) can be written in here


fun1(1)
fun2(2)


# enclosed:
def fun3():
    x = 3

    def fun4():
        print("x is: ", end="")
        print(x)

    fun4()


fun3()

# global
globalX = 45


def fun5():
    print("global value of x is: ", end="")
    print(globalX)


fun5()

# built-in
from math import e


def fun7():
    print(f"value of e is: {e}")


def fun8():
    e = 5  # value of e is changed in here
    print(f"new value of e={e}")


fun7()
fun8()
