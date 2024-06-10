#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void Person1(string n, int a) {
        name = n;
        age = a;
    }

    void PersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Derived class 1
class Student : public Person {
private:
    float percentage;

public:
    void Student1(float p) {
        PersonData();
        percentage = p;
    }

    void displayStudentData() const {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    void initializeTeacher(double s) {
        PersonData();
        salary = s;
    }

    void displayTeacherData() const {
        displayPersonData();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter data for student:\n";
    student.Student1(85.5);
    student.displayStudentData();

    cout << "\nEnter data for teacher:\n";
    teacher.initializeTeacher(50000.0);
    teacher.displayTeacherData();

    return 0;
}
