""" Write a Python program to check multiple keys exists in a dictionary """
def check_keys(dictionary, keys):
    for key in keys:
        if key not in dictionary:
            return False
    return True

my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4}

keys_check = ['a', 'b']

if check_keys(my_dict, keys_check):
    print("all keys exist in the dictionary.")
else:
    print("Not all keys exist in the dictionary.")
