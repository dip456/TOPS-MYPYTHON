/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance) */
#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    int rollNumber;

public:
    void inputStudentData() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    void displayStudentData()const{
        cout << "Roll Number: " << rollNumber <<endl;
    }
};


class Test : public Student {
protected:
    float subject1Marks;
    float subject2Marks;

public:
    void inputTestMarks() {
        cout << "Enter Marks for Subject 1: ";
        cin >> subject1Marks;
        cout << "Enter Marks for Subject 2: ";
        cin >> subject2Marks;
    }

    void displayTestMarks() const {
        cout << "Subject 1 Marks: " << subject1Marks <<endl;
        cout << "Subject 2 Marks: " << subject2Marks <<endl;
    }
};

class Result : public Test {
private:
    float totalMarks;

public:
    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayResult() const {
        displayStudentData();  
        displayTestMarks();    
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;

    // Input data
    studentResult.inputStudentData();
    studentResult.inputTestMarks();

    //display result
    studentResult.calculateTotalMarks();
    studentResult.displayResult();

    return 0;
}
