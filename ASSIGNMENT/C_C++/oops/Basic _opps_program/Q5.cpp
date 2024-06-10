/*Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double Len) {
        length = Len;
    }

    void setWidth(double Wid) {
        width = Wid;
    }

    double getLength(){
        return length;
    }

    double getWidth(){
        return width;
    }

    double area(){
        return length * width;
    }

    double calPerimeter(){
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;

    rect.setLength(10.0);
    rect.setWidth(7.0);

    cout <<"Length: "<<rect.getLength()<<endl;
    cout << "Width: "<<rect.getWidth()<<endl;

    cout << "Area: " <<rect.area()<<endl;
    cout << "Perimeter: "<<rect.calPerimeter()<<endl;

    return 0;
}
