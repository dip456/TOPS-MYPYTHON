""" Write a Python program to convert a list of characters into a string. """
def str_marge(char_list):
    string = ''.join(char_list)
    return string

list = ['D', 'i', 'p', 'a', 'k']
result_string = str_marge(list)
print("your string:", result_string)
