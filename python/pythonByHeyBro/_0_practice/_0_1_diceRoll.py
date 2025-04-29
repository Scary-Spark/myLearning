# print("\u25cf \u250C \u2500 \u2510 \u2502 \u2514 \u2518")
# ● ┌ ─ ┐ │ └ ┘

"┌─────────┐"
import random

"│         │"
"│         │"
"│         │"
"└─────────┘"

diceArt = {
    1: (
        "┌─────────┐",
        "│         │",
        "│    ●    │",
        "│         │",
        "└─────────┘",
    ),
    2: (
        "┌─────────┐",
        "│ ●       │",
        "│         │",
        "│       ● │",
        "└─────────┘",
    ),
    3: (
        "┌─────────┐",
        "│ ●       │",
        "│    ●    │",
        "│       ● │",
        "└─────────┘",
    ),
    4: (
        "┌─────────┐",
        "│ ●     ● │",
        "│         │",
        "│ ●     ● │",
        "└─────────┘",
    ),
    5: (
        "┌─────────┐",
        "│ ●     ● │",
        "│    ●    │",
        "│ ●     ● │",
        "└─────────┘",
    ),
    6: (
        "┌─────────┐",
        "│ ●     ● │",
        "│ ●     ● │",
        "│ ●     ● │",
        "└─────────┘",
    )
}

dice = []
total = 0
num_of_dice = int(input("How many dice: "))
for i in range(num_of_dice):
    dice.append(random.randint(1, 6))

# for i in range(num_of_dice):
#     for line in diceArt.get(dice[i]):
#         print(line)

for line in range(5):
    for die in dice:
        print(diceArt.get(die)[line], end=" ")
    print()

for i in dice:
    total += i
print(f"Total: {total}")
