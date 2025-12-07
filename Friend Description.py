class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        
    
    def __str__(self):
        return f"My name is {self.name} and I am {self.age} years old"

myles = Person(
    name="Shawn Kakasi",
    age="20"
)

print(myles)