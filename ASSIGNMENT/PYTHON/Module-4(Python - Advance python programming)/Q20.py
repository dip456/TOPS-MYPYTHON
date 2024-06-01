""" Write python program that user to enter only odd numbers, else will 
raise an exception. """

num = int(input("enter num : "))
if (num % 2) == 0:
    pass
else:
    raise ValueError('you enterd odd number')

print("end")

