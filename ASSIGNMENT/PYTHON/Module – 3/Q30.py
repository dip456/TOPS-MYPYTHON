""" Write a Python program to convert a list of tuples into a dictionary. """
def convert_dict(my_list):
    return dict(my_list)
list_my = [(1,'dipak'),(2,'kiran'),(3,'sanket')]
convert = convert_dict(list_my)
print("converted : ",convert)
