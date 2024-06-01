""" Write a Python program to convert a tuple to a string. """

my_tuple = (10,20,30,40,50)
string_tuple = tuple(str(element) for element in my_tuple)

result_string = ''.join(string_tuple)

print("Tuple as string:", result_string)
