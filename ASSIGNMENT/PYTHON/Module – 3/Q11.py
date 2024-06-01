"""Write a Python function that takes a list and returns a new list with unique elements of the first list. """
def new_list(input_list):
    unique_list = list(set(input_list))
    return unique_list

original_list = [10,20,30,40,40,50,50,60]
result_list = new_list(original_list)
print(result_list)  
