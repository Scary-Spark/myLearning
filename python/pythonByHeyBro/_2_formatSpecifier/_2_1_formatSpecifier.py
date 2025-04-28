# format specifier = {value: flags} format a value based on what flags are required

# .(number)f = round to many decimal places (fixed point)
# :(number) = allocate that many spaces
# :03 = allocate and zero pad that many spaces
# :< = left justify
# :> = right justify
# :^ = centre align
# :+ = use a plus sign to indicate positive value
# := = place sign to left post position
# :  = inset a space before positive number
# :, = comma seperator

price1 = 3.1443262
price2 = -987.34352
price3 = 12.34

print(f"Price 1 is: ${price1:.2f}")
print(f"Price 2 is: ${price2:15}")
print(f"Price 3 is: ${price3:010}")
print()

print(f"price 3 left justify: {price3:<10}")
print(f"price 3 right justify: {price3:>10}\n")

print(f"price 2 in centre: {price2:^15}")
print(f"price 3 in centre: {price3:^10}")
print()

print(f"price 1 is: {price1:+}")
print(f"price 2 is: {price2:+}")
print(f"price 3 is: {price3:+}")

price4 = 237609.23793
print(f"price with comma: {price4:,}")
