def view_fruit_stock(manager):
    print("\nFruit Stock:")
    for fruit, details in manager.items():
        print(f"Fruit: {fruit.capitalize()}, Quantity: {details['quantity']} kg, Price per kg: {details['price']}")
