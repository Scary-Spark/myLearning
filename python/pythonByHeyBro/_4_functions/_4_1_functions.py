# function is a block of readable code
# place () after the function to name it

def happyBirthdayFunction(name):
    print(f"Happy birthday to you, {name}")


def sumOfTwoNumbers(x, y):
    return x + y


def createName(firstName, lastName):
    firstName = firstName.capitalize()
    lastName = lastName.capitalize()
    return firstName + " " + lastName


happyBirthdayFunction("Liton")
happyBirthdayFunction("Tamim")
happyBirthdayFunction("Mahmudullah")

print(f"Sum of the numbers: {sumOfTwoNumbers(3, 4)}")

print(f"create name: {createName("scary", "spark")}")
