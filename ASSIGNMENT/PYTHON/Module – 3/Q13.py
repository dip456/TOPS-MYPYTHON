"""Write a Python program to select an item randomly from a list."""
import random
def random_value(input_list):
    r_item = random.choice(input_list)
    return r_item

my_list = ['DFHH',10,20,30,40,'A',50,'Y',60,70,100]
random_item = random_value(my_list)
print(random_item)

