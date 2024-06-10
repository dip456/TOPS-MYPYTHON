/*Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.*/
#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    string company,model;
    int year;

public:
    Car(){
        company = "";
        model = "";
        year = 0;
    }

    Car(string Company1,string Model1, int newYear) {
        company =Company1;
        model = Model1;
        year = newYear;
    }

    string getCompany(){
        return company;
    }

    string getModel(){
        return model;
    }

    int getYear(){
        return year;
    }

    void setCompany(string Company1) {
        company = Company1;
    }

    void setModel(string Model1) {
        model = Model1;
    }

    void setYear(int newYear) {
        year = newYear;
    }
};

int main() {
    Car c1;

    c1.setCompany("verna");
    c1.setModel("Hundai");
    c1.setYear(2024);

    cout<<"Company: "<<c1.getCompany() <<endl;
    cout<<"Model: "<<c1.getModel()<<endl;
    cout<<"Year: "<<c1.getYear()<<endl;
    return 0;
}
