"""Differentiate between append () and extend () methods?"""

""" append():
            The append() method adds a single element to the end of the list.
            If the argument passed to append() is another list, the entire list
            is added as a single element to the end of the list."""

my_list = [1,2,3]
my_list.append(4)         
my_list.append([5,6])   

"""extend():
            It iterates over its argument and adds each element from the iterable to the
              end of the list individually."""
my_list = [1,2,3]
my_list.extend([4,5])    


