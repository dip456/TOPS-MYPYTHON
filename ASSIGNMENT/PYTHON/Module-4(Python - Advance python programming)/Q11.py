""" Write a Python program to write a list to a file. """
my_list = ['dipak', 'PiK', 'sanket', 'kiran', 'python']

with open('output.txt', 'w') as file:
    for item in my_list:
        file.write("%s\n" % item)
