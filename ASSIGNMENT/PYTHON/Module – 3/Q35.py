""" How Do You Traverse Through A Dictionary Object In Python? """
"""In Python, you can traverse through a dictionary using various methods. Here are some common ways to
   iterate through a dictionary:

Using a for loop:
        You can use a for loop to iterate over the keys of the dictionary and access corresponding values."""
# my_dict = {'a': 1, 'b': 2, 'c': 3}

# for key in my_dict:
#     print(key, my_dict[key])

"""Using items() method: The items() method returns a view object that displays a list of a dictionary's
   key-value tuple pairs. You can then iterate over these pairs directly."""

my_dict = {'a': 1, 'b': 2, 'c': 3}

for key, value in my_dict.items():
    print(key, value)
