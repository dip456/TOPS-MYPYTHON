/*Write a C++ Program display Student Mark sheet using Multiple inheritance */
#include <iostream>
#include <string>

using namespace std;

// Base class
class PersonalInfo {
protected:
    string name;
    int age;

public:
    void inputPersonalInfo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonalInfo() const {
        cout << "\nPersonal Information:\n";
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Base class
class AcademicInfo {
protected:
    int rollNumber;
    float marks;

public:
    void inputAcademicInfo() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayAcademicInfo() const {
        cout << "\nAcademic Information:\n";
        cout << "Roll Number: " << rollNumber << "\nMarks: " << marks << endl;
    }
};

class StudentMarkSheet : public PersonalInfo, public AcademicInfo {
public:
    void inputStudentData() {
        inputPersonalInfo();
        inputAcademicInfo();
    }

    void displayStudentMarkSheet() const {
        displayPersonalInfo();
        displayAcademicInfo();
    }
};

int main() {
    StudentMarkSheet student;

    cout << "Enter student data:\n";
    student.inputStudentData();

    cout << "\nStudent Mark Sheet:\n";
    student.displayStudentMarkSheet();

    return 0;
}
