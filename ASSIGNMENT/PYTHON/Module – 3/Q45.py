""" Write a Python program to find the highest 3 values in a dictionary """
def highest_3_values(dictionary):
    sorted_items = sorted(dictionary.items(), key=lambda x: x[1], reverse=True)
    top_3_values = sorted_items[:3]
    return top_3_values

# Sample data
data = {'a': 10, 'b': 20, 'c': 15, 'd': 25, 'e': 5}

# Find and print the highest 3 values
top_3_values = highest_3_values(data)
print("Highest 3 values in the dictionary:")
for key, value in top_3_values:
    print(key, ":", value)
