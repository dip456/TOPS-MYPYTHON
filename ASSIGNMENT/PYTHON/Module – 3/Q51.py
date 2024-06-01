"""Write a Python function that checks whether a passed string is 
palindrome or not """
def is_palindrome(s):
    
    s = ''.join(char.lower() for char in s if char.isalnum())
    return s == s[::-1]

input_string = "A man, a plan, a canal"
print(is_palindrome(input_string))  

