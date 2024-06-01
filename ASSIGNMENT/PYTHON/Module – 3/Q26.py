""" Write a Python program to replace last value of tuples in a list. """
def change_last(tuples_list, new_value):
    
    return [(i[:-1] + (my_value,)) for i in tuples_list]

list = [(1, 2, 3), (4, 5, 6), (7, 8, 9)]
my_value = 100
modified_list = change_last(list, my_value)
#print("Original list:",list)
print("Modified list:", modified_list)
