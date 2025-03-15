#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// ... Classes for Course, Program, Department, and universities (remain the same)
class Course {
public:
    string name;
    int semester; // Semester in which the course is offered
    bool isTheory; // Flag to indicate theory or lab course
};

class Program {
public:
    string name;
    int totalSemesters; // Total number of semesters in the program
    vector<Course> coursesPerSemester[8]; // Courses offered in each semester (max 8)
};

class Department {
public:
    string name;
    unordered_map<string, Program> programs; // Programs offered by the department
};

unordered_map<string, Department> universities; // Global map to store universities and their departments

// Function to load data from text file (modify as per your file format)
void loadDataFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    // Parse file contents and populate universities map
    // ... (implement parsing logic based on your file structure)
}

// Function to display available courses for a semester
void displayCourses(const Program& program, int semester) {
    cout << "Available courses in semester " << semester << ":" << endl;
    for (const Course& course : program.coursesPerSemester[semester - 1]) {
        cout << course.name << " (" << (course.isTheory ? "Theory" : "Lab") << ")" << endl;
    }
}

// Function to get syllabus for a selected course
void getSyllabus(const Program& program, int semester, const string& courseName) {
    // Access and display the syllabus for the chosen course
    // ... (implement logic to retrieve syllabus data)
}

// ... Implement other feature functions (getBookList, getCourseMaterial, etc.)

int main() {
    loadDataFromFile("data.txt"); // Replace with your actual file name

    // ... (authentication and feature selection logic as discussed earlier)

    return 0;
}
