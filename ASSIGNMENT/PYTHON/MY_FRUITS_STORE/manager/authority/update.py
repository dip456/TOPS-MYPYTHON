def update_fruit_stock(manager):
    fruit_name = input("Enter fruit name to update: ").strip()
    if fruit_name in manager:
        new_quantity = int(input("Enter new quantity (in kg): "))
        new_price = float(input("Enter new price per kg: "))
        manager[fruit_name]['quantity'] = new_quantity
        manager[fruit_name]['price'] = new_price
        print("Fruit stock updated successfully.")
    else:
        print("Fruit not found in stock.")