#include <iostream>
#include <limits>

using namespace std;

// Function
void displayMenu();
int getChoice();
double getNumber(string prompt);
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        displayMenu();
        choice = getChoice();

        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        num1 = getNumber("Enter first number: ");
        num2 = getNumber("Enter second number: ");

        switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 != 0) {
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error! Division by zero." << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please select a valid option from the menu." << endl;
                break;
        }
    }

    return 0;
}

void displayMenu() {
    cout << "\nMenu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
}

int getChoice() {
    int choice;
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    if (cin.fail() || choice < 1 || choice > 5) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return -1;  // Invalid choice
    }
    return choice;
}

double getNumber(string prompt) {
    double number;
    cout << prompt;
    cin >> number;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid number: ";
        cin >> number;
    }
    return number;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        return 0;  
    }
    return a / b;
}
