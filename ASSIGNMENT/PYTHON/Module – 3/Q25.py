"""Write a Python program to reverse a tuple. """
def rev_tuple(tuples):
    rev = tuples[::-1]
    return rev
my_tuple = (10,20,30,40,50,60)
print(rev_tuple(my_tuple))
