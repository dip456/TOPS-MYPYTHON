/*Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid. */
#include<iostream>
using namespace std;
class Date {
private:
    int day,month,year;

public:
    Date(){
       int day(1), month(1), year(2000);
    }

    // Set functions
    void setDay(int d) {
        if (isValidDay(d))
            day = d;
        else
            cout<< "Invalid day entered!" <<endl;
    }

    void setMonth(int m) {
        if (isValidMonth(m))
            month = m;
        else
            cout<<"Invalid month entered!" <<endl;
    }

    void setYear(int y) {
        if (isValidYear(y))
            year = y;
        else
            cout << "Invalid year entered!" <<endl;
    }

    // Get functions
    int getDay(){
        return day;
    }

    int getMonth(){
        return month;
    }

    int getYear(){
        return year;
    }

    // Function to check if the date is valid
    bool isValidDate(){
        return isValidDay(day) && isValidMonth(month) && isValidYear(year);
    }

private:
    bool isValidDay(int d) const {
        return d >= 1 && d <= 31;
    }

    bool isValidMonth(int m) const {
        return m >= 1 && m <= 12;
    }

    bool isValidYear(int y) const {
        return y >= 1900; 
    }
};

int main() {
    Date D1;

    D1.setDay(14);
    D1.setMonth(4);
    D1.setYear(2024);

    // display date
    if (D1.isValidDate()) {
        cout <<"Date: " << D1.getDay() << "/"
                  <<D1.getMonth() << "/" << D1.getYear()<<endl;
    } else {
        cout<<"Invalid date!"<<endl;
    }

    return 0;
}
