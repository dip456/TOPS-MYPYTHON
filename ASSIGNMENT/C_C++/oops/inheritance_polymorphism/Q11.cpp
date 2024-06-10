#include <iostream>
using namespace std;
class Number;

void swap(Number num1, Number num2);

class Number {
private:
    int value;

public:
    Number(int val){
        value=val;
    }

    friend void swap(Number num1, Number num2);

    void displayNumber() const {
        cout << "Number: " << value << endl;
    }
};

void swap(Number num1, Number num2) {
    num1.value = num1.value + num2.value;
    num2.value = num1.value - num2.value;
    num1.value = num1.value - num2.value;
}

int main() {
    Number num1(5);
    Number num2(10);

    cout << "Before swapping:\n";
    num1.displayNumber();
    num2.displayNumber();

    swap(num1, num2);

    cout << "\nAfter swapping:\n";
    num1.displayNumber();
    num2.displayNumber();

    return 0;
}
