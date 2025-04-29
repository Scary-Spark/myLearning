# class variable = shared among all instance of a class
#                  defined outside the constructor
#                  allow you to share all the objects created from the class

class Student:
    class_GraduateYear = 2024  # this is class variable
    totalStudents = 0

    def __init__(self, name, age):
        self.name = name  # these are instance variable
        self.age = age  # these are instance variable
        Student.totalStudents += 1


s1 = Student("Spark", 21)
s2 = Student("Ronaldo", 25)
s3 = Student("Messi", 35)

print(f"{s1.name} {s1.age} {Student.class_GraduateYear}")  # as it is class variable we can use class name to call it
print(f"{s2.name} {s2.age} {Student.class_GraduateYear}")
print(f"Total Students: {Student.totalStudents}")
