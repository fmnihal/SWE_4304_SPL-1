// #include <iostream>
// #include <fstream>
// #include <string>
// #include <map>
// #include <vector>

// using namespace std;

// // Define a struct to represent course information
// struct Course {
//     string name;
//     string booksFile;  // File containing the list of books for the course
// };

// int main() {
//     // Create a map of courses with their associated books file
//     map<string, Course> courses;
//     courses["Math101"] = { "Math101", "math101_books.txt" };
//     courses["Physics101"] = { "Physics101", "physics101_books.txt" };
//     // Add more courses and their corresponding book files as needed

//     string courseName;
//     cout << "Enter the name of the course to get the book list: ";
//     cin >> courseName;

//     // Check if the entered course exists
//     if (courses.find(courseName) != courses.end()) {
//         string booksFileName = courses[courseName].booksFile;
//         ifstream booksFile(booksFileName);

//         if (booksFile.is_open()) {
//             string bookTitle;
//             vector<string> bookList;
//             cout << "Books for " << courseName << ":\n";
//             while (getline(booksFile, bookTitle)) {
//                 bookList.push_back(bookTitle);
//                 cout << bookTitle << endl;
//             }
//             booksFile.close();
//         } else {
//             cerr << "Book list for " << courseName << " not found." << endl;
//         }
//     } else {
//         cerr << "Course not found." << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <fstream>
// #include <string>
// #include <map>

// using namespace std;

// int main() {
//     // Create a map to store course book lists
//     map<string, string> courseBooks;

//     // Read course book lists from a configuration file
//     ifstream configFile("course_books.txt");
//     if (configFile.is_open()) {
//         string courseName, bookList;
//         while (getline(configFile, courseName) && getline(configFile, bookList)) {
//             courseBooks[courseName] = bookList;
//         }
//         configFile.close();
//     } else {
//         cerr << "Configuration file not found or could not be opened." << endl;
//         return 1;
//     }

//     // List the available courses
//     cout << "Available Courses:\n";
//     for (const auto& entry : courseBooks) {
//         cout << entry.first << endl;
//     }

//     // Ask the user to select a course
//     string selectedCourse;
//     cout << "Enter the name of the course to get the book list: ";
//     cin >> selectedCourse;

//     // Check if the selected course exists in the configuration
//     if (courseBooks.find(selectedCourse) != courseBooks.end()) {
//         string bookList = courseBooks[selectedCourse];
//         cout << "Book List for " << selectedCourse << ":\n" << bookList << endl;
//     } else {
//         cerr << "Course not found." << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    // Create a map to store course book lists
    map<string, vector<string>> courseBooks;

    // Add courses and their associated book lists
    courseBooks["OOP"] = {
        "The Object Oriented Thought Process",
        "99 Bottles of OOP; Sandy Metz",
        "Agile Software Developments, Principles, Patterns & Practices; Robert Martin",
        "Clean Code; Robert Martin",
        "Refactoring; Martin Fowler, Kent Beck",
        "Test Driven Development by Example; Kent Beck",
        "Code One Month Older; You!"
    };
    
    courseBooks["COA"] = {
        "COA: Designing for Performance; 10th Ed; William Stallings",
        "Computer Organization & Design: The Hardware/Software Interface; 5th Ed; Hennsey, Patterson"
    };
    
    courseBooks["TOC"] = {
        "Introduction to Automata Theory, Languages & Computation; 3rd Ed; Hopcroft",
        "Introduction to the TOC; 2nd Ed; Sipser"
    };
    
    courseBooks["DS"] = {
        "Data Structures And Algorithm Analysis In C++ 4th Edition Mark Allen",
        "Data Structures Using C 2nd Edition by Rema Thareja"
    };
    
    courseBooks["LA"] = {
        "Introduction to Linear Algebra, 5th Ed, Gilbert Strang"
    };
    
    courseBooks["DBMS"] = {
        "Database System Concepts, 7th Edition, Silberschatz"
    };

    // Ask the user to select a course
    cout << "Available Courses:\n";
    for (const auto& entry : courseBooks) {
        cout << entry.first << endl;
    }

    string selectedCourse;
    cout << "Enter the name of the course to get the book list: ";
    cin >> selectedCourse;

    // Check if the selected course exists
    if (courseBooks.find(selectedCourse) != courseBooks.end()) {
        cout << "Book List for " << selectedCourse << ":\n";
        for (const string& book : courseBooks[selectedCourse]) {
            cout << book << endl;
        }
    } else {
        cerr << "Course not found." << endl;
    }

    return 0;
}
