class Plant:
    
    def __init__(self, name, height, age):
        self.name = name
        self.height = height
        self.age = age

    def display(self):
        print(f"{self.name}: {self.height}cm, {self.age} days old")


def ft_garden_data():

    print("=== Garden Plant Registry ===")

    plants = [
        Plant("Rose", 25, 30),
        Plant("Sunflower", 80, 45),
        Plant("Cactus", 15, 120)
    ]

    for i in range(len(plants)):
        plants[i].display()


ft_garden_data()
