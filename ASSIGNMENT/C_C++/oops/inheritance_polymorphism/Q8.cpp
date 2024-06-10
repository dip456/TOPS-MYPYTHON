/* Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading */
#include <iostream>
using namespace std;

class Maths{
public:
    int operate(int num1, int num2) {
        return num1 + num2;
    }

    float operate(float num1, float num2) {
        return num1 - num2;
    }

    double operate(double num1, double num2) {
        return num1 * num2;
    }

    double operate(double num1, int num2) {
        if (num2 == 0) {
            cout<< "Error: Division by zero\n";
            return 0.0;
        }
        return static_cast<double>(num1) / num2;
    }
};

int main() {
    Maths m1;

    int sum = m1.operate(10, 3);
    float sub = m1.operate(10, 5);
    double multi = m1.operate(4.0, 7.5);
    double div = m1.operate(10.0, 2);

    cout << "Result of Add: " << sum <<endl;
    cout << "Result of Sub: " << sub <<endl;
    cout << "Result of Multi: " << multi <<endl;
    cout << "Result of Div: " << div <<endl;

    return 0;
}
