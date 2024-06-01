"""Write a Python function to calculate the factorial of a number (a 
nonnegative integer) """
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

num = 5  # Example input
print("Factorial of", num, "is", factorial(num))
