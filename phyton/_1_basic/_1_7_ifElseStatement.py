age = int(input("Enter your age: "))
if age >= 18:
    print("You can vote")
elif age < 0:
    print("You are not born yet")
else:
    print("You can't vote")

like = input("If you like food?:(Y/N) ")
if like == "Y":
    print("You like food")
else:
    print("You don't like food")

online = True
if online:
    print("You are now online")
else:
    print("You are not online")
