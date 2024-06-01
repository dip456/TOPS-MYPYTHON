""" When will the else part of try-except-else be executed? 
"""

try:
    x = int(input("Enter a number: "))
except ValueError:
    print("Invalid input! Please enter a valid number.")
else:
    print("You entered:", x)

    """
    If no exceptions occur in the try block, the code within the else block will be executed. 
    This is useful when you want to execute some code only if the code within the try block runs successfully 
    without raising any exceptions. It's typically used for code that should only execute if the primary 
    operation in the try block succeeds.
    
"""

