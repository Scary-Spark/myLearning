name = input("Enter your name: ")

while name == "":
    print("You don't entered a valid name!!!")
    name = input("Enter your name: ")

num = int(input("Enter a number between 1 to 10: "))

while num < 1 or num > 10:
    print(f"num is not valid")
    num = int(input("Enter a number between 1 to 10: "))
print(f"Your num is: {num}")
