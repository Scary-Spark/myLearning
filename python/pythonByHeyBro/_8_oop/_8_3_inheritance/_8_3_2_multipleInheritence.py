# multiple inheritance = inherit from more than one class

class Pray:
    def flee(self):
        print("This animal is fleeing")


class Predator:
    def hunt(self):
        print("This animal is hunting")


class Rabbit(Pray):
    pass


class Hawk(Predator):
    pass


class Fish(Pray, Predator):
    pass


rabbit = Rabbit()
fish = Fish()
hawk = Hawk()

rabbit.flee()
hawk.hunt()
fish.flee()
fish.hunt()
