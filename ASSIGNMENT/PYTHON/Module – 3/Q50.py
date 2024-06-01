""" Write a Python function to check whether a number is perfect or not. """
def is_perfect(number):
    
    if number <= 0:
        return False

    divisor_sum = sum([divisor for divisor in range(1, number) if number % divisor == 0])
    return divisor_sum == number

# Test the function
number = 28
print("Is", number, "a perfect number?", is_perfect(number))
