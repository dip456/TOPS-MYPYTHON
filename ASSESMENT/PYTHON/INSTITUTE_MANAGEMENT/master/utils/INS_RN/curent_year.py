from datetime import datetime

class CurrentDateTime:
    """
    A class to represent the current date and time, providing specific attributes for the current month and year.

    Attributes
    ----------
    current_date : datetime
        Class attribute that holds the current date and time at the moment the class is first accessed.
    month : str
        Instance attribute that holds the current month as a zero-padded string.
    year : str
        Instance attribute that holds the last two digits of the current year as a zero-padded string.

    Methods
    -------
    __init__()
        Initializes the month and year attributes using the current_date class attribute.
    """

    current_date = datetime.now()
    
    def __init__(self):
        """
        Initializes the CurrentDateTime instance by setting the month and year attributes based on the current date.
        """
        self.month = CurrentDateTime.current_date.strftime('%m')
        self.year = CurrentDateTime.current_date.strftime('%y')

# Example usage:
CURRENT_DATETIME = CurrentDateTime()
# print(CURRENT_DATETIME.month)  # Outputs the current month, e.g., '05' for May
# print(CURRENT_DATETIME.year)   # Outputs the last two digits of the current year, e.g., '24' for 2024
