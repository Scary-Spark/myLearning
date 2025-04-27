name = "Spark"
age = 21
gpa = 3.7
isStudent = True

print(f"Name variable type is: {type(name)}")
print(f"Age variable type is: {type(age)}")
print(f"Cgpa variable type is: {type(gpa)}")
print(f"Student variable type is: {type(isStudent)}")

gpa = int(gpa)
print(f"Type casing gpa into integer: {gpa}, {type(gpa)}")

newName = ""
newName = bool(newName)
print(newName)  # return false

newAge = -2
newAge = bool(newAge)
print(newAge)
