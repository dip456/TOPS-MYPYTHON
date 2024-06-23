#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Lecture {
private:
    // Data members
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    Lecture(string lecturer, string subject, string course, int lectures)
        : lecturerName(lecturer), 
          subjectName(subject),
          courseName(course),
          numberOfLectures(lectures) {}

    void setLectureDetails(string lecturer, string subject, string course, int lectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numberOfLectures = lectures;
    }

    void displayLectureDetails() const {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numberOfLectures << endl;
    }

    string getLecturerName() const {
        return lecturerName;
    }
};

void addLecture(vector<Lecture>& lectures);
void displayLectures(const vector<Lecture>& lectures);

int main() {
    vector<Lecture> lectures;

    lectures.push_back(Lecture("Dr. dipak", "Mathematics", "Engineering", 30));
    

    int choice;

    while (true) {
        cout << "\nLecture Management System Menu:" << endl;
        cout << "1. Add or Modify Lecture Details" << endl;
        cout << "2. Display Lecture Details" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addLecture(lectures);
                break;
            case 2:
                displayLectures(lectures);
                break;
            case 3:
                cout << "Exiting the system. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option from the menu." << endl;
        }
    }

    return 0;
}

void addLecture(vector<Lecture>& lectures) {
    string lecturer, subject, course;
    int lecturesCount;

    cout << "Enter lecturer's name: ";
    cin.ignore(); 
    getline(cin, lecturer);

    cout << "Enter subject name: ";
    getline(cin, subject);

    cout << "Enter course name: ";
    getline(cin, course);

    cout << "Enter number of lectures: ";
    cin >> lecturesCount;

    for (auto& lec : lectures) {
        if (lec.getLecturerName() == lecturer) {
            lec.setLectureDetails(lecturer, subject, course, lecturesCount);
            cout << "Lecture details updated for " << lecturer << "." << endl;
            return;
        }
    }

    lectures.push_back(Lecture(lecturer, subject, course, lecturesCount));
    cout << "Lecture details added for " << lecturer << "." << endl;
}

void displayLectures(const vector<Lecture>& lectures) {
    if (lectures.empty()) {
        cout << "No lecture details available." << endl;
        return;
    }

    for (const auto& lecture : lectures) {
        lecture.displayLectureDetails();
        cout << "--------------------------" << endl;
    }
}
