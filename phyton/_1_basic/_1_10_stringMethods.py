name = input("Enter your full name: ")
print(f"Length of your name is: {len(name)}")
print(f"a first appear in: {name.find("a")}")  # print the first occurance of the sting
print(f"a last appear in: {name.rfind("a")}")

name = name.capitalize()
print(f"Capitalize Name: {name}")  # only first letter capital
name = name.upper()
print(f"Upper case: {name}")
name = name.lower()
print(f"Lower case: {name}")

onlyDigit = name.isdigit()  # if only contains digits like 01234
if onlyDigit:
    print("You have only entered digits")
else:
    print("Your name has letters")

onlyAlpha = name.isalpha()  # if only alphabetical word. other sytax space will also return false
print(f"only alpha: {onlyAlpha}")

count = name.count("a")
print(f"There are total of {count} a in your name")

print(f"After replace a with x: {name.replace("a", "x")}")

print("Help function of string")
print(f"Help {help(str)}")
