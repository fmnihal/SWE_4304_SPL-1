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
