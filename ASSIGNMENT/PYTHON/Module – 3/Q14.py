"""Write a Python program to find the second smallest number in a list. """

def second_min_num(input_list):
    sort_list = sorted(input_list)
    second_smallest = sort_list[1]
    return second_smallest

my_list = [5, 20, 8, 10, 30, 9, 4]
result = second_min_num(my_list)
print("Second min number:", result)
