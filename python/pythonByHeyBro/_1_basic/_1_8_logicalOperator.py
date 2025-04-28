gender = input("Enter gender (m/f)?: ")
age = int(input("enter age: "))

if gender == "f" and age > 12:
    print("You are female to vote")
elif gender == "m" or age > 18:
    print("You can vote")
else:
    "You can't vote"

isSunny = False
if not isSunny: print("Today is not sunny")
