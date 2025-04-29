import random

low = 1
high = 20
number = random.randint(low, high)  # 1<= n <=20
print(f"Integer between 0 to n: {number}")

number = random.random()  # floating point between 0 to 1
print(f"Floating point between 0 to 1: {number:.2f}")

options = ("rock", "paper", "scissors")
print(f"random from the options: {random.choice(options)}")

cards = ["2", "3", "4", "5", "6", "7", "8", "9", "10", "j", "k", "q", "a"]
random.shuffle(cards)
print(f"Shuffled cards: {cards}")
