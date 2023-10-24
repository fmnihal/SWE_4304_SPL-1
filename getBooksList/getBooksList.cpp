#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>

using namespace std;

// Define a struct to represent course information
struct Course {
    string name;
    string booksFile;  // File containing the list of books for the course
};

int main() {
    // Create a map of courses with their associated books file
    map<string, Course> courses;
    courses["Math101"] = { "Math101", "math101_books.txt" };
    courses["Physics101"] = { "Physics101", "physics101_books.txt" };
    // Add more courses and their corresponding book files as needed

    string courseName;
    cout << "Enter the name of the course to get the book list: ";
    cin >> courseName;

    // Check if the entered course exists
    if (courses.find(courseName) != courses.end()) {
        string booksFileName = courses[courseName].booksFile;
        ifstream booksFile(booksFileName);

        if (booksFile.is_open()) {
            string bookTitle;
            vector<string> bookList;
            cout << "Books for " << courseName << ":\n";
            while (getline(booksFile, bookTitle)) {
                bookList.push_back(bookTitle);
                cout << bookTitle << endl;
            }
            booksFile.close();
        } else {
            cerr << "Book list for " << courseName << " not found." << endl;
        }
    } else {
        cerr << "Course not found." << endl;
    }

    return 0;
}
