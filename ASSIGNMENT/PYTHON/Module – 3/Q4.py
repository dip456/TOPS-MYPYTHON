"""Write a Python function to get the largest number, smallest num and sum 
   of all from a list."""

def max_min_sum(numbers):
    

    largest = max(numbers)
    smallest = min(numbers)
    sum_list = sum(numbers)
    return largest, smallest,sum_list

numbers = [100, 500, 200, 50, 150]
largest, smallest,sum_list = max_min_sum(numbers)
print("Largest number:", largest)
print("Smallest number:", smallest)
print("Sum of all numbers:",sum_list)
