""" Write a Python program to check whether a list contains a sub list """
def is_sublist(main_list, sub_list):
    # Convert both lists to strings
    main_str = ''.join(map(str, main_list))
    sub_str = ''.join(map(str, sub_list))
    
    # Check if sublist exists in the main list
    if sub_str in main_str:
        return True
    else:
        return False

# Test the function
main_list = [1, 2, 3, 4, 5, 6, 7, 8]
sub_list1 = [3, 4, 5]
sub_list2 = [8,10]

print("Is sublist1 present in main_list:", is_sublist(main_list, sub_list1))
print("Is sublist2 present in main_list:", is_sublist(main_list, sub_list2))
