""" Write a Python program to unzip a list of tuples into individual lists. """
def unzip_list(list_tuples):
    
    return tuple(zip(*list_tuples))

list_t = [(1, 2, 3), ('dipak', 'sanket', 'kiran'), (True, False, True)]
unzip_lists = unzip_list(list_t)
print("Unzipped lists:", unzip_lists)
