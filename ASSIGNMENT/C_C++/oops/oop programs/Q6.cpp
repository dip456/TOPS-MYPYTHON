/*Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor */
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID,salary;
    

public:
    Employee(string empName, int empID, int initialSalary){
        name=empName;
         employeeID=empID;
          salary=initialSalary;
    }

    void setSalary(int performance) {
        salary *= performance;
    }

    double getSalary(){
        return salary;
    }

    void displayInfo(){
        cout <<"Employee id : "<< employeeID <<endl;
        cout<< "Name : "<< name <<endl;
        cout<<"Salary: "<< salary <<endl;
    }
};

int main() {
    Employee emp("DIPAK", 1, 50000);

    cout<< "Employee Information:" <<endl;
    emp.displayInfo();

    emp.setSalary(2);

    cout<< "\n..............Employee Information.............:" <<endl;
    emp.displayInfo();

    return 0;
}
