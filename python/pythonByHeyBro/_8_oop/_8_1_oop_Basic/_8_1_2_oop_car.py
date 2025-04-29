class Car:
    def __init__(self, model, year, color, for_sell):  # dunder (double underscore) method, it behave like a function
        self.model = model
        self.year = year
        self.color = color
        self.for_sell = for_sell

    def displayDetails(self):
        print(f"Model: {self.model}")
        print(f"Year: {self.year}")
        print(f"Color: {self.color}")
        print(f"For sale: {self.for_sell}")
