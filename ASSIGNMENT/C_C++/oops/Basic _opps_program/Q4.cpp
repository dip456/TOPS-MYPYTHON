#include <iostream> 
#include <cmath> 
using namespace std;
const double PI = 3.14159; 

class Circle { 
  private: 
    double radius; 

  public:
    Circle(double rad): radius(rad) {}

    double calculateArea() {
      return PI * pow(radius, 2); 
    }

    double calculateCircumference() {
      return 2 * PI * radius; 
    }
};

int main() {
  double radius;
  cout << "Input the radius of the circle: ";
  cin >> radius; 
  Circle circle(radius);

  double area = circle.calculateArea(); 
  cout << "Area: "<< area <<endl;

  double circumference = circle.calculateCircumference(); 
  cout << "Circumference: " << circumference <<endl; 
  return 0;
}