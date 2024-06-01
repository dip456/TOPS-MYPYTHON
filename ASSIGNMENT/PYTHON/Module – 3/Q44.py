"""Write a Python program to create and display all combinations of letters, 
selecting each letter from a different key in a dictionary. 
Sample data: {'1': ['a','b'], '2': ['c','d']} 
Expected Output: 
ac ad bc bd """

from itertools import product

def generate_combinations(dictionary):
    keys = list(dictionary.keys())
    values = [dictionary[key] for key in keys]
    combinations = product(*values)
    return combinations

def display_combinations(combinations):
    for combination in combinations:
        print(''.join(combination), end=' ')

# Sample data
data = {'1': ['a', 'b'], '2': ['c', 'd']}

# Generate and display combinations
combinations = generate_combinations(data)
display_combinations(combinations)
