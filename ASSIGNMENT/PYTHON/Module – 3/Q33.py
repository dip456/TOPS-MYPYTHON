"""Write a Python script to concatenate following dictionaries to create a new one. """
dict_1 = {1:'dipak',2:'sanket'}
dict_2 = {3:'kiran',4:'prasant'}
dict_3 = {5:'PK',6:'Aengel'}
new_dict = {}

for dict_element in dict_1,dict_2,dict_3:
    new_dict.update(dict_element)
print(new_dict)