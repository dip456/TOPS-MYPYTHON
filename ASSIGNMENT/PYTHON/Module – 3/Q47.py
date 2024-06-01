"""Write a Python program to create a dictionary from a string. 
 
Note: Track the count of the letters from the string. 
Sample string: 'w3resource' 
Expected output: 
{'3': 1,’s’: 1, 'r': 2, 'u': 1, 'w': 1, 'c': 1, 'e': 2, 'o': 1}  """
def create_dictionary_from_string(input_string):
    char_count = {}
    
    for char in input_string:
        char_count[char] = char_count.get(char, 0) + 1
    
    return char_count

# Sample string
input_string = 'w3resource'

# Create dictionary from the string
result = create_dictionary_from_string(input_string)
print("Dictionary created from the string:", result)
