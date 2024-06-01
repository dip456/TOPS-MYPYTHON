"""Write a Python program to check a list is empty or not. """

# my_list = []
# print(my_list.count(my_list))

def check_list(my_list):
    if len(my_list) == 0:
        return 0
    else:
        return 1
my_list = [10,20,30,78,50]
if check_list(my_list):
    print("this list is not Empty...!")
else:
    print("this list is a Empty....!")