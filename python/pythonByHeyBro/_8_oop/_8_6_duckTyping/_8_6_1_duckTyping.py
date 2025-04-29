# duck typing = another way to achieve polymorphism
#               Objects must be have minimum necessary attributes/ methods
#               "If it looks like a duck, quack like a duck and it must be a duck"

class Animal:
    isAlive = True


class Dog(Animal):
    def speak(self):
        print("Woof!")


class Cat(Animal):
    def speak(self):
        print("Meow!")


class Car:
    isAlive = True

    def speak(self):
        print("Hank!")


animals = [Dog(), Cat(), Car()]
for animal in animals:
    animal.speak()
    print(f"Alive: {animal.isAlive}")
