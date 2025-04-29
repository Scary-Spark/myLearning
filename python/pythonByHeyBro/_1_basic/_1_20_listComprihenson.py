#  list comprehension = is a concise way to write list in python
#                       compact and easier to read than traditional loop
#                       [expression for value in  iterable if condition ]

double = []
for x in range(1, 11):
    double.append(x * 2)
print(double)

# shortcut
multi = [x * 2 for x in range(1, 11)]
print(multi)

multi = [x * 2 for x in range(1, 11) if x % 2 == 0]
print(multi)

students = ["tamim", "tafiq", "safiq", "musfiq"]
students = [student.capitalize() for student in students]
print(students)

print(f"first letter: {[student[0] for student in students]}")
