# inheritance = allows a class to inherit attributes and methods from another class
#               class child(parent)

class Animal:
    def __init__(self, name):
        self.name = name
        self.isAlive = True

    def eat(self):
        print(f"{self.name} is eating")

    def sleeping(self):
        print(f"{self.name} is sleeping")

    def roaring(self):
        print(f"{self.name} is roaring")


class Dog(Animal):
    def speak(self):
        print("Woof!")


class Cat(Animal):
    def speak(self):
        print("Meow!")


class Mouse(Animal):
    def speak(self):
        print("Squeue!")


dog = Dog("Scooby")
cat = Cat("Garfield")
mouse = Mouse("Jerry")

print(f"Dog name: {dog.name}")
print(f"Cat name: {cat.name}")
print(f"Mouse name: {mouse.name}")
print()

dog.eat()
cat.sleeping()
mouse.roaring()

print()
dog.speak()
