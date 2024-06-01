"""How Do You Check The Presence Of A Key In A Dictionary?"""

"""In Python, you can check the presence of a key in a dictionary using the in keyword or the get() method."""

#Using the in keyword:

# my_dict = {'a': 10, 'b':20, 'c':30}

# if 'a' in my_dict:
#     print("'a' is present in the dictionary.")
# else:
#     print("'a' is not present in the dictionary.")

#Using the get() method:
my_dict = {'a': 1, 'b': 2, 'c': 3}

# Check if 'b' is present in the dictionary using get()
if my_dict.get('b'):
    print("'b' is present in the dictionary.")
else:
    print("'b' is not present in the dictionary.")
    


