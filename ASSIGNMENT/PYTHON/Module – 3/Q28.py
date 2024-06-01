""" Write a Python program to remove an empty tuple(s) from a list of tuples. """
def remove_empty_tuples(tuples_list):
   
    return [i for i in tuples_list if i]

original_list = [(1, 2, 3), (), (4, 5), (), (6,), ()]
modified_list = remove_empty_tuples(original_list)
print("Original list:", original_list)
print("Modified list:", modified_list)
