"""Write a Python script to sort (ascending and descending) a dictionary by value."""
my_dict = {'dipak': 10, 'sanket': 5, 'kiran': 20, 'python': 15}

sorted_dict_asc = dict(sorted(my_dict.items(), key=lambda item: item[1]))

sorted_dict_desc = dict(sorted(my_dict.items(), key=lambda item: item[1], reverse=True))

print("Dictionary sorted by value in ascending order:")
print(sorted_dict_asc)

print("\nDictionary sorted by value in descending order:")
print(sorted_dict_desc)
