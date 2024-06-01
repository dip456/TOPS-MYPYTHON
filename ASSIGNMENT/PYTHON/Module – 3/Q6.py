"""Write a Python program to count the number of strings where the string 
length is 2 or more and the first and last character are same from a given 
list of strings.
"""
def check_string(str):
    cnt = 0
    for string in str:
        if len(string) >= 2 and string[0] == string[-1]:
            cnt += 1
    return cnt

print(check_string(['pqr', 'xyz', 'aba', '1551','ioi']))


