# membership operator= used to check weather a value or variable found in sequence
#                      (sting, list, tuple, set, dictionary)
#                      1. in
#                      2. not in

word = "apple"

while True:
    letter = input("guess a letter: ")
    if letter not in word:
        print("You guess it wrong")
    else:
        print("You guess it right")
