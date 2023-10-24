#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct Book {
    string title;
    string author;
};

struct Course {
    string name;
    vector<Book> books;
};

void saveBookList(const Course& course) {
    ofstream file(course.name + "_booklist.txt", ios::app); // Use ios::app to append data
    if (file.is_open()) {
        for (const auto& book : course.books) {
            file << "Title: " << book.title << "\nAuthor: " << book.author << "\n\n";
        }
        file.close();
        cout << "Book list for " << course.name << " appended to " << course.name << "_booklist.txt\n";
    } else {
        cout << "Error: Unable to save book list for " << course.name << "\n";
    }
}

void editBookList(Course& course) {
    string title, author;
    cin.ignore(); // Clear the input buffer
    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter author: ";
    getline(cin, author);
    course.books.push_back({title, author});
    cout << "Book added to the list.\n";
}

void viewBookList(const Course& course) {
    ifstream file(course.name + "_booklist.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Error: Unable to open book list file for " << course.name << endl;
    }
}

int main() {
    int choice;
    string courseName;
    vector<Course> courses;
    bool courseExists;

    do {
        cout << "Menu:\n";
        cout << "1. Add/Edit Book List\n";
        cout << "2. View Book List\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the input buffer

        courseExists = false; // Initialize the variable here

        switch (choice) {
            case 1:
                cout << "Enter course name: ";
                getline(cin, courseName);

                // Check if the course already exists
                for (auto& course : courses) {
                    if (course.name == courseName) {
                        courseExists = true;
                        editBookList(course);
                        saveBookList(course);
                        break;
                    }
                }

                // If the course doesn't exist, create a new one
                if (!courseExists) {
                    Course newCourse;
                    newCourse.name = courseName;
                    editBookList(newCourse);
                    courses.push_back(newCourse);
                    saveBookList(newCourse);
                }
                break;

            case 2:
                cout << "Enter course name: ";
                getline(cin, courseName);

                // Display book list for the specified course
                for (const auto& course : courses) {
                    if (course.name == courseName) {
                        viewBookList(course);
                        break;
                    }
                }
                break;

            case 3:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
