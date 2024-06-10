/*Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance */
#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    string name;
    int age;

public:
    Person(const string n, int a) {
        name=n;
         age=a;
    }

    void PersonInfo() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : public Person {
protected:
    int rollNumber;

public:
    Student(const string n, int a, int roll) : Person(n, a), rollNumber(roll) {
    }

    void displayStudentInfo() const {
        PersonInfo();  
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class ExamResult : public Student {
private:
    float marks;

public:
    ExamResult(const string n, int a, int roll, float m) : Student(n, a, roll), marks(m) {
    }

    void displayExamResult() const {
        displayStudentInfo();  
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    ExamResult studentResult("dip", 23, 01, 97.5);

    cout << "\nStudent Details:\n";
    studentResult.displayExamResult();

    return 0;
}
