# in short switch case

def dayOfWeek(day):
    match day:
        case 1:
            return "saturday"
        case 2:
            return "sunday"
        case 3 | 4:  # '|' is or
            return "Monday or tuesday"
        case _:  # default day
            return "wrong input"


num = int(input("type number: "))
print(f"Today is: {dayOfWeek(num)}")
