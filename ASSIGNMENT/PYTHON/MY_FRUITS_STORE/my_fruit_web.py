from manager.authority import add
from manager.authority import view
from manager.authority import update
from customer.authority_customer import cust

def main():
    print("......................Welcome to Fruit Market...........................\n")
    print("1) Manager")
    print("2) Customer\n")

    role = input("Select your choice: ")

    manager = {}

    if role == '1':
        while True:
            print("\nFruit Market Manager\n")
            print("1) Add Fruit Stock")
            print("2) View Fruit Stock")
            print("3) Update Fruit Stock\n")

            choice = input("Enter your choice: ")
            if choice == '1':
                add.add_fruit_stock(manager)
            elif choice == '2':
                view.view_fruit_stock(manager)
            elif choice == '3':
                update.update_fruit_stock(manager)
            else:
                print("Invalid choice.")
            more = input("Do you want to perform more operations? (y/n): ")
            if more.lower() != 'y':
                break
    elif role == '2':
        
        purchase =cust.purchase_fruits()
        print(purchase)
    else:
        print("Invalid role. Please select 1 or 2.")

if __name__ == "__main__":
    main()
