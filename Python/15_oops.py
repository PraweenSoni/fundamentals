"""
Topics are :

  1.  What is OOP? (Theory + Benefits)
  2.  Class and Object
  3.  __init__ (Constructor) and self
"""


def heading(title):
    """Only used to make the output easy to read."""
    print("\n" + "=" * 60)
    print(title)
    print("=" * 60)

# 1. WHAT IS OOP?

"""
OOP = a way of writing code where we think of the program as a set of
OBJECTS, just like things in real life.

Every real-life thing has 2 parts:
    DATA      (attributes) -> what it HAS    (a car's color, speed)
    BEHAVIOR  (methods)    -> what it can DO (start, brake)
In OOP, we pack both together inside one object.

Problem before OOP (procedural style):
    100 students = 200 separate variables + separate functions. Messy!
With OOP:
    Create one blueprint (class), then create 1000 objects from it.

The 4 PILLARS of OOP:
    1. Encapsulation = Bundle data + methods together, and protect the data
                        (ATM: you press buttons, you never touch the system inside)
    2. Inheritance   = One class can reuse the features of another class
                        (a child inherits habits from the parents)
    3. Polymorphism  = One name, many forms
                        (a Dog barks, a Cat meows, but the method is the same: sound())
    4. Abstraction   = Show only what is necessary, hide the complexity
                        (while driving you don't see how the engine works inside)

BENEFITS:
    1. Code reuse       - write once, use many times (inheritance)
    2. Organized code   - large projects become easy to manage
    3. Security         - data can be kept private
    4. Easy maintenance - a bug is fixed in one class only
    5. Real-world model - you think in code the way the world works
    6. Teamwork         - different people can work on different classes
"""


# 2. CLASS AND OBJECT

"""
CLASS  = a blueprint (design). It is not a real thing itself, only a design.
OBJECT = the real thing created from that blueprint. Also called an INSTANCE.

Example: "Car" is a class. Your Swift or Creta are objects.
You can create as many objects as you want from one class.
"""

heading("2. CLASS AND OBJECT")


class Dog:
    def bark(self):              # method = a function inside a class
        print("Woof woof!")


d1 = Dog()    # object created (instance)
d2 = Dog()    # another object
d1.bark()
d2.bark()
print(type(d1))          # <class '__main__.Dog'>
print(d1 is d2)          # False -> they are two different objects


# =====================================================================
# 3. __init__ (CONSTRUCTOR) AND self
# =====================================================================
"""
__init__ :
    - It is the constructor method.
    - It runs AUTOMATICALLY the moment an object is created.
    - Purpose: set the initial values (attributes) of the object.

self :
    - Means "this very object".
    - It is the FIRST parameter of every instance method.
    - Python passes it automatically, we don't pass it while calling.
    - self.name = name  ->  "this object's name = the value that was given"

Attributes = data    (self.name, self.marks)
Methods    = actions (show, is_pass)
Every object has its OWN separate data.
"""

heading("3. __init__ AND self")


class Student:
    def __init__(self, name, marks):
        self.name = name         # attribute
        self.marks = marks       # attribute

    def show(self):              # method
        print(f"{self.name}'s marks: {self.marks}")

    def is_pass(self):
        return self.marks >= 40


s1 = Student("Rahul", 75)    # __init__ ran right here
s2 = Student("Priya", 32)

s1.show()
s2.show()
print("Is Priya pass?", s2.is_pass())

# Changing an attribute is easy too:
s2.marks = 50
print("Is Priya pass after the change?", s2.is_pass())


# =====================================================================
# 4. CLASS VARIABLE vs INSTANCE VARIABLE
# =====================================================================
"""
Instance variable : belongs to each object separately (self.xxx, inside __init__)
Class variable    : belongs to the class, COMMON for all objects (outside __init__)

Example: the school name is the same for all students, but marks differ.
"""

heading("4. CLASS vs INSTANCE VARIABLE")


class Pupil:
    school = "ABC Public School"     # class variable (common)
    count = 0                        # counts how many objects were created

    def __init__(self, name):
        self.name = name             # instance variable (different for each)
        Pupil.count += 1             # change a class variable using the class name


p1 = Pupil("Amit")
p2 = Pupil("Neha")
print(p1.name, "-", p1.school)
print(p2.name, "-", p2.school)
print("Total pupils:", Pupil.count)   # 2
