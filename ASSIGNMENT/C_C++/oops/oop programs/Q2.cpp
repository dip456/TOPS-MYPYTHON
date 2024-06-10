/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructor. */
#include <iostream>
using namespace std;

class Calculator {
private:
    float num1;
    float num2;

public:
    Calculator(float a, float b) : num1(a), num2(b) {}

    float add(){
        return num1 + num2;
    }
     float subtract(){
        return num1 - num2;
    }

    float multiply(){
        return num1 * num2;
    }

    float divide(){
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout<< "Error: Division by zero." <<endl;
           // return 0; 
        }
    }
};

int main() {
    Calculator cal(5.0, 4.0);

    cout<<"Add : "<< cal.add()<<endl;
    cout<<"Sub : "<< cal.subtract()<<endl;
    cout<<"Multi: "<<cal.multiply()<<endl;
    cout << "Div: " << cal.divide() <<endl;

    return 0;
}
