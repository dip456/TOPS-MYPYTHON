def add_fruit_stock(manager):

    fruit_name = input("Enter fruit name : ").strip()
    quantity = int(input("Enter quantity (in kg) : "))
    price = float(input("Enter price per kg : "))
    manager[fruit_name] = {'quantity': quantity, 'price': price}
    print("New Fruit add successfully.")
