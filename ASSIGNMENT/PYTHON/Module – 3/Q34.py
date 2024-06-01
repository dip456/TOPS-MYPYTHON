"""Write a Python script to check if a given key already exists in a dictionary. """

my_dict = {1:10, 2:20, 3:'dipak', 4:40, 5:50, 6:'xyz'}
def check_value(value):
    if value in my_dict:
        print(" already exists....!")
    else:
        print("key value not present in dict...!")
check_value(3)
check_value(7)