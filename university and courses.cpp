#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

struct Course {
    string name;
    int credits;
};

struct Program {
    string name;
    vector<Course> courses;
};

struct University {
    string name;
    int ranking;
    vector<Program> programs;
};

void displayUniversityData(const vector<University>& universities) {
    for (const auto& uni : universities) {
        cout << "University: " << uni.name << " - Ranking: " << uni.ranking << endl;
        for (const auto& program : uni.programs) {
            cout << "\tProgram: " << program.name << endl;
            for (const auto& course : program.courses) {
                cout << "\t\tCourse: " << course.name << " - Credits: " << course.credits << endl;
            }
        }
        cout << endl;
    }
}

void saveUniversityData(const vector<University>& universities) {
    ofstream file("universities_and_courses.txt");
    if (file.is_open()) {
        for (const auto& uni : universities) {
            file << "University: " << uni.name << " - Ranking: " << uni.ranking << endl;
            for (const auto& program : uni.programs) {
                file << "\tProgram: " << program.name << endl;
                for (const auto& course : program.courses) {
                    file << "\t\tCourse: " << course.name << " - Credits: " << course.credits << endl;
                }
            }
            file << endl;
        }
        cout << "University data saved to universities_and_courses.txt\n";
        file.close();
    } else {
        cout << "Error: Unable to save university data to file.\n";
    }
}

void loadUniversityData(vector<University>& universities) {
    ifstream file("universities_and_courses.txt");
    if (file.is_open()) {
        University university;
        Program program;
        Course course;
        string line;
        while (getline(file, line)) {
            if (line.find("University:") != string::npos) {
                if (!university.name.empty()) {
                    universities.push_back(university);
                }
                university = University();
                program = Program();
                university.name = line.substr(line.find(":") + 2);
                file >> line; // Read "Ranking:"
                file >> university.ranking;
            } else if (line.find("Program:") != string::npos) {
                program.name = line.substr(line.find(":") + 2);
                university.programs.push_back(program);
                program = Program();
            } else if (line.find("Course:") != string::npos) {
                course.name = line.substr(line.find(":") + 2);
                file >> line; // Read "Credits:"
                file >> course.credits;
                program.courses.push_back(course);
                course = Course();
            }
        }
        if (!university.name.empty()) {
            universities.push_back(university);
        }
        file.close();
        cout << "University data loaded from universities_and_courses.txt\n";
    } else {
        cout << "No existing university data found.\n";
    }
}

// Function to input university data and add it to the vector
void inputUniversityData(vector<University>& universities) {
    string universityName, programName, courseName;
    int ranking, credits;

    cout << "Enter university data (name, ranking, 0 to stop):\n";
    while (true) {
        University university;

        // Read university name with spaces
        cout << "University name: ";
        getline(cin >> ws, universityName);
        if (universityName == "0") {
            break;
        }

        cout << "Ranking: ";
        cin >> ranking;

        // Clear the input buffer to consume the newline character
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        university.name = universityName;
        university.ranking = ranking;

        cout << "Enter programs and courses (name, 0 to stop):\n";
        while (true) {
            Program program;

            // Read program name with spaces
            cout << "Program name: ";
            getline(cin >> ws, programName);
            if (programName == "0") {
                break;
            }

            program.name = programName;

            cout << "Enter courses and credits (name, credits, 0 to stop):\n";
            while (true) {
                Course course;

                // Read course name with spaces
                cout << "Course name: ";
                getline(cin >> ws, courseName);
                if (courseName == "0") {
                    break;
                }

                cout << "Credits: ";
                cin >> credits;

                // Clear the input buffer to consume the newline character
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                course.name = courseName;
                course.credits = credits;

                program.courses.push_back(course);
            }

            university.programs.push_back(program);
        }

        universities.push_back(university);
    }
}

int main() {
    vector<University> universities;
    loadUniversityData(universities);

    // Call function to input university data
    inputUniversityData(universities);

    // Your logic for additional operations like modifying, deleting data
    // ...

    // Display and save university data
    cout << "\nList of Universities, Programs, and Courses:\n";
    displayUniversityData(universities);

    saveUniversityData(universities); // Save data to file before exiting the program

    return 0;
}
