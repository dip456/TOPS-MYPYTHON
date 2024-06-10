/*Write a program to find the multiplication values and the cubic values using 
inline function */
#include <iostream>
using namespace std;
class Maths {
public:
    inline int multiply(int a, int b) {
        return a * b;
    }

    inline double cubic(int x) {
        return x * x * x;
    }
};

int main() {
    Maths m1;

    int mul_result = m1.multiply(5, 3);
    cout<<"Multiplication Result: "<< mul_result<<endl;

    int cube_result = m1.cubic(5);
    cout<<"Cubic Result: "<< cube_result<<endl;
    return 0;
}
