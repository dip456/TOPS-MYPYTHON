"""Write a Python program to get unique values from a list """
def get_unique_values(input_list):

    unique_set = set(input_list)
    unique_list = list(unique_set)
    return unique_list

my_list = [1,20,20,30,4,30,20,4, 5]
unique_values = get_unique_values(my_list)
print("Unique values:", unique_values)
