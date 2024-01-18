#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string courseName;
    cout << "Enter the name of the course to access course materials: ";
    getline(cin, courseName);

    string fileName = courseName + ".txt";  // Assuming course materials are stored in text files with course names as file names

    ifstream courseMaterialFile(fileName);
    
    if (courseMaterialFile.is_open()) {
        string line;
        cout << "Course Materials for " << courseName << ":\n";
        while (getline(courseMaterialFile, line)) {
            cout << line << endl;
        }
        courseMaterialFile.close();
    } else {
        cerr << "Course materials for " << courseName << " not found." << endl;
    }

    return 0;
}
