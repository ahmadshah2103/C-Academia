class Student:
    name: str
    age: int
    cgpa: float

    def __init__(self, name, age, cgpa):
        self.name = name
        self.age = age
        self.cgpa = cgpa

    def __str__(self):
        return f"{self.name} (Age: {self.age}, CGPA: {self.cgpa})"


if __name__ == "__main__":
    a = Student("Ahmad Shah", 21, 3.2)
    print(a)

    b = Student("Ali", 22, 3.8)
    print(b)
