from db_conn import dbconnection
from hotel_menu.my_hotel import hotelmanagementsystem
from tkinter import *

dbconnection.create_database()
dbconnection.create_cust_table()
dbconnection.create_table_room()
dbconnection.create_add_rooms()

if __name__ == '__main__':
    root = Tk()
    obj = hotelmanagementsystem(root)
    root.mainloop()