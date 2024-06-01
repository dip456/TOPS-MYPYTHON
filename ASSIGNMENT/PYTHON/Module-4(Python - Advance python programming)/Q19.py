""" How Do You Handle Exceptions With Try/Except/Finally In Python? 
Explain with coding snippets. """
y = 10
try:
    x = int(input("Enter a number: "))
    result = y / x
    print("Result:", result)
except ValueError:
    print("Please enter a valid number.")
except ZeroDivisionError:
    print("Cannot divide by zero!")
finally:
    print("This block is always executed")
