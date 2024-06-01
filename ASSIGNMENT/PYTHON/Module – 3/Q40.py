""" Write a Python program to map two lists into a dictionary """
keys = ['python', 'java', 'php']

values = [1, 2, 3]


color_dictionary = dict(zip(keys, values))

print(color_dictionary)
