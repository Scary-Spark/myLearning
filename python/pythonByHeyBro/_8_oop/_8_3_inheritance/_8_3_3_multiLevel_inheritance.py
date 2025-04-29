# multi-level inheritance = parent class inherit from another parent class

class Animal:
    def __init__(self, name):
        self.name = name

    def eat(self):
        print(f"{self.name} is eating")


class Pray(Animal):
    def flee(self):
        print(f"{self.name} is fleeing")


class Predator(Animal):
    def hunt(self):
        print(f"{self.name} is hunting")


class Rabbit(Pray):
    pass


class Hawk(Predator):
    pass


class Fish(Pray, Predator):
    pass


rabbit = Rabbit("Bunny")
fish = Fish("Hilsa")
hawk = Hawk("Mr. Flee")
print()
rabbit.flee()
hawk.hunt()
fish.flee()
fish.hunt()
print()
rabbit.eat()
