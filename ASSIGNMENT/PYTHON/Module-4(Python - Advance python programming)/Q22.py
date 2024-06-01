"""How to Define a Class in Python? What Is Self? Give An Example Of
A Python Class"""

"""you can define a class using the class keyword followed by the class name and a colon (:).
 Inside the class definition, you can include class variables and methods. Here's a basic example
   of how to define a class in Python:"""
class my_class:
    class_variable = "I am a class"
    
    def __init__(self, arg1, arg2):
        self.arg = arg1
        self.arg = arg2
    
    """In Python, self is a conventionally used name for the first parameter of instance methods in a class.
    When you define a method within a class and intend for it to be used with instances of that class, you must
    include self as the first parameter in the method definition"""

    