/*Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/
#include <iostream>
#include <string>
using namespace std;
class Cricketer{
protected:
    string Name;
    int matches;

public:
    void input() {
        cout << "Enter player name: ";
        cin >> Name;
        cout << "Enter number of matches played: ";
        cin >> matches;
    }
};

class Batsman : public Cricketer{
private:
    int Runs,Performance;
    double averageRuns;
    

public:
    void inputBatsmanData() {
        input(); 
        cout<< "Enter total runs: ";
        cin >>Runs;
        cout << "Enter best performance: ";
        cin >>Performance;
        AverageRuns();
    }

    void AverageRuns() {
        if (matches> 0) {
            averageRuns = static_cast<double>(Runs) / matches;
        } else {
            averageRuns = 0.0;
        }
    }

    void displayData() {
        cout << "\nPlayer Name: " <<Name;
        cout << "\nMatches Played: " << matches;
        cout << "\nTotal Runs: " <<Runs;
        cout << "\nAverage Runs: " <<averageRuns;
        cout << "\nBest Performance: " <<Performance <<endl;
    }
};

int main() {
    Batsman bat;
    bat.inputBatsmanData();
    bat.displayData();

    return 0;
}
