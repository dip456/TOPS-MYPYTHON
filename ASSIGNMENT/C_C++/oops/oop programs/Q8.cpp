/*Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation*/
#include <iostream>
#include <string>

// Address class for aggregation
class Address {
public:
    std::string street;
    std::string city;
    std::string state;
    std::string zipCode;

    // Constructor for Address class
    Address(const std::string& street, const std::string& city, const std::string& state, const std::string& zipCode)
        : street(street), city(city), state(state), zipCode(zipCode) {}
};

// Student class with aggregation of Address
class Student {
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    int marks;
    Address studentAddress;  // Aggregation of Address class

public:
    // Constructor
    Student(const std::string& name, const std::string& studentClass, int rollNumber, int marks,
            const std::string& street, const std::string& city, const std::string& state, const std::string& zipCode)
        : name(name), studentClass(studentClass), rollNumber(rollNumber), marks(marks),
          studentAddress(street, city, state, zipCode) {}

    // Member function to calculate grade based on marks
    char calculateGrade() const {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

    // Member function to display student information
    void displayInfo() const {
        std::cout << "Student Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
        std::cout << "Address: " << studentAddress.street << ", " << studentAddress.city << ", "
                  << studentAddress.state << ", " << studentAddress.zipCode << std::endl;
    }
};

int main() {
    // Creating a Student object with aggregation of Address
    Student student("John Doe", "12th Grade", 101, 85, "123 Main St", "Anytown", "CA", "12345");

    // Displaying student information
    student.displayInfo();

    return 0;
}
