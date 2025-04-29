# class method= Allows operation related to class itself
#               take (cls) as the first parameter, which represents the class itself
class Student:
    totalStudent = 0

    def __init__(self, name, gpa):
        self.name = name
        self.gpa = gpa
        Student.totalStudent += 1

    # instance method
    def getInfo(self):
        return f"{self.name} = {self.gpa}"

    @classmethod
    def get_totalStudent(cls):
        return f"Total No of Students: {cls.totalStudent}"


s1 = Student("Rahim", 3.23)
s2 = Student("Karim", 3.5)
print(Student.get_totalStudent())
