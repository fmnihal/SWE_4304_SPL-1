#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {
    // Create a map to store course URLs
    map<string, string> courseURLs;

    // Read course URLs from a configuration file
    ifstream configFile("course_urls.txt");
    if (configFile.is_open()) {
    string courseName, courseURL;
    while (getline(configFile, courseName) && getline(configFile, courseURL)) {
        courseURLs[courseName] = courseURL;
    }
    configFile.close();
}

    else {
        cerr << "Configuration file not found or could not be opened." << endl;
        return 1;
    }

    // Ask the user to select a course
    cout << "Enrolled Courses:\n";
    for (const auto& entry : courseURLs) {
        cout << entry.first << endl;
    }

    string selectedCourse;
    cout << "Enter the name of the course to access the study forum: ";
    cin >> selectedCourse;

    // Check if the selected course exists in the configuration
    if (courseURLs.find(selectedCourse) != courseURLs.end()) {
        string studyForumURL = courseURLs[selectedCourse];
        cout << "Redirecting to the study forum for " << selectedCourse << ":\n" << studyForumURL << endl;
    } else {
        cerr << "Course not found." << endl;
    }

    return 0;
}
