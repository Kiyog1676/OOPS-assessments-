
#include <iostream>
#include <string>
using namespace std;

class LectureDetails {
private:
    struct Lecturer {
        string lecturerName;
        string subjectName;
        string courseName;
    };

    Lecturer lecturers[5];  
    int numLecturers;

public:
    LectureDetails() : numLecturers(0) {}

    void assignInitialValues() {
        if (numLecturers >= 5) {
            cout << "Maximum number of lecturers reached." << endl;
            return;
        }

        cout << "Enter lecturer name: ";
        cin >> lecturers[numLecturers].lecturerName;
        cout << "Enter subject name: ";
        cin >> lecturers[numLecturers].subjectName;
        cout << "Enter course name: ";
        cin >> lecturers[numLecturers].courseName;

        numLecturers++;
    }

    void addLectureDetails(string lecturerName, string subjectName, string courseName) {
        if (numLecturers >= 5) {
            cout << "Maximum number of lecturers reached." << endl;
            return;
        }

        lecturers[numLecturers].lecturerName = lecturerName;
        lecturers[numLecturers].subjectName = subjectName;
        lecturers[numLecturers].courseName = courseName;

        numLecturers++;
    }

    void displayLectureDetails() {
        cout << "Lecturer Details:" << endl;
        for (int i = 0; i < numLecturers; i++) {
            cout << "Lecturer Name: " << lecturers[i].lecturerName << endl;
            cout << "Subject Name: " << lecturers[i].subjectName << endl;
            cout << "Course Name: " << lecturers[i].courseName << endl;
            cout << endl;
        }
    }
};

int main() {
    LectureDetails lectureDetails;

    // Assign initial values for at least 5 lecturers
    for (int i = 0; i < 5; i++) {
        lectureDetails.assignInitialValues();
    }

    // Display lecture details
    lectureDetails.displayLectureDetails();

    // Add more lecture details
    lectureDetails.addLectureDetails("surbhi", "Math", "Math101");
    lectureDetails.addLectureDetails("subhesh", "Science", "Science101");

    // Display updated lecture details
    lectureDetails.displayLectureDetails();

    return 0;
}
