"""Write a Python script to merge two Python dictionaries """

d1 = {'Banana': 100, 'Apple': 200}
d2 = {'mango': 300, 'lemon': 200}

new_d = d1.copy()
new_d.update(d2)
print(new_d) 
