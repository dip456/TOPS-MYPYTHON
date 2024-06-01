""" Write a Python function to check whether a number is in a given range """
def is_in_range(number, lower_bound, upper_bound):
   
    return lower_bound <= number <= upper_bound

# Test the function
number = 7
lower_bound = 5
upper_bound = 10
print("Is", number, "in range (", lower_bound, ",", upper_bound, ") ?", is_in_range(number, lower_bound, upper_bound))
