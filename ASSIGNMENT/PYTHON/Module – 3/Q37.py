"""Write a Python script to print a dictionary where the keys are numbers between 1 and 15. """
# Create an empty dictionary
my_dict = {}

# Populate the dictionary with keys as numbers between 1 and 15 and values as their squares
for i in range(1, 16):
    my_dict[i] = i ** 2

# Print the dictionary
print(my_dict)
