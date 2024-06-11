import string
import random

def generate_password(length=8):
    """
    Generates a random password.

    Parameters:
        length (int, optional): Length of the password. Defaults to 8.

    Returns:
        str: Randomly generated password.
    """
    chars = string.ascii_letters + string.digits + '@_.'
    password = ''
    for ch in range(1, length+1):
        password += chars[random.randint(0, len(chars)-1)]
    return password