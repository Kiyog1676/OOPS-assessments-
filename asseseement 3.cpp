#include <iostream>
#include <string>
using namespace std;

class LectureDetails {
private:
    struct Lecturer {
        string name;
        string subject;
        string course;
    };

    Lecturer lecturers[5];
    int numLecturers;

public:
    LectureDetails() {
        numLecturers = 0;
    }

    void addLecturer(const string& name, const string& subject, const string& course) {
        if (numLecturers < 5) {
            lecturers[numLecturers].name = name;
            lecturers[numLecturers].subject = subject;
            lecturers[numLecturers].course = course;
            numLecturers++;
        } else {
            cout << "Maximum number of lecturers!" << endl;
        }
    }

    void displayLecturerDetails() {
        cout << "Lecture Details:" << endl;
        for (int i = 0; i < numLecturers; i++) {
            cout << "Lecturer " << i + 1 << ":" << endl;
            cout << "Name of the lecturer: " << lecturers[i].name << endl;
            cout << "Name of the subject: " << lecturers[i].subject << endl;
            cout << "Name of course: " << lecturers[i].course << endl;
            cout << endl;
        }
    }
};

int main() {
    LectureDetails lectureManager;

    // Adding details for 5 lecturers
    lectureManager.addLecturer("surbhi", "Maths", "Calculus 101");
    lectureManager.addLecturer("jaydeep", "Physics", "Physics 101");
    lectureManager.addLecturer("yogesh", "History", "World History");
    lectureManager.addLecturer("Subhesh", "Computer Science", "Programming 101");
    lectureManager.addLecturer("kiran", "python", "fundamental of python");

    // Display lecture details for all lecturers
    lectureManager.displayLecturerDetails();

    return 0;
}
