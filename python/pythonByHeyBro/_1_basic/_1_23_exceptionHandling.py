# exception = An event that interrupts the flow of a program
#             (ZeroDivisionError, TypeError, ValueError)
#             1.try (try some code)
#             2.except exception (handle the exception)
#             3.finally (do some clean up)
#             4.except exception : catch every exception
#             zeroDivisionError = 1 / 0
#             typeError = 1 + "pizza"
#             valueError = int ("pizza")

try:
    number = int(input("Enter a number: "))
except ValueError:
    print("You don't give a integer number")
finally:
    number = int(input("Enter a number: "))
