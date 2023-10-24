#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>

struct Course {
    std::string name;
    int credits;
};

struct Program {
    std::string name;
    std::vector<Course> courses;
};

struct University {
    std::string name;
    int ranking;
    std::vector<Program> programs;
};

void displayUniversityData(const std::vector<University>& universities) {
    for (const auto& uni : universities) {
        std::cout << "University: " << uni.name << " - Ranking: " << uni.ranking << std::endl;
        for (const auto& program : uni.programs) {
            std::cout << "\tProgram: " << program.name << std::endl;
            for (const auto& course : program.courses) {
                std::cout << "\t\tCourse: " << course.name << " - Credits: " << course.credits << std::endl;
            }
        }
        std::cout << std::endl;
    }
}

void saveUniversityData(const std::vector<University>& universities) {
    std::ofstream file("universities_and_courses.txt");
    if (file.is_open()) {
        for (const auto& uni : universities) {
            file << "University: " << uni.name << " - Ranking: " << uni.ranking << std::endl;
            for (const auto& program : uni.programs) {
                file << "\tProgram: " << program.name << std::endl;
                for (const auto& course : program.courses) {
                    file << "\t\tCourse: " << course.name << " - Credits: " << course.credits << std::endl;
                }
            }
            file << std::endl;
        }
        std::cout << "University data saved to universities_and_courses.txt\n";
        file.close();
    } else {
        std::cout << "Error: Unable to save university data to file.\n";
    }
}

void loadUniversityData(std::vector<University>& universities) {
    std::ifstream file("universities_and_courses.txt");
    if (file.is_open()) {
        University university;
        Program program;
        Course course;
        std::string line;
        while (std::getline(file, line)) {
            if (line.find("University:") != std::string::npos) {
                if (!university.name.empty()) {
                    universities.push_back(university);
                }
                university = University();
                program = Program();
                university.name = line.substr(line.find(":") + 2);
                file >> line; // Read "Ranking:"
                file >> university.ranking;
            } else if (line.find("Program:") != std::string::npos) {
                program.name = line.substr(line.find(":") + 2);
                university.programs.push_back(program);
                program = Program();
            } else if (line.find("Course:") != std::string::npos) {
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
        std::cout << "University data loaded from universities_and_courses.txt\n";
    } else {
        std::cout << "No existing university data found.\n";
    }
}


// Function to input university data and add it to the vector
void inputUniversityData(std::vector<University>& universities) {
    std::string universityName, programName, courseName;
    int ranking, credits;

    std::cout << "Enter university data (name, ranking, 0 to stop):\n";
    while (true) {
        University university;

        // Read university name with spaces
        std::cout << "University name: ";
        std::getline(std::cin >> std::ws, universityName);
        if (universityName == "0") {
            break;
        }

        std::cout << "Ranking: ";
        std::cin >> ranking;

        // Clear the input buffer to consume the newline character
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        university.name = universityName;
        university.ranking = ranking;

        std::cout << "Enter programs and courses (name, 0 to stop):\n";
        while (true) {
            Program program;

            // Read program name with spaces
            std::cout << "Program name: ";
            std::getline(std::cin >> std::ws, programName);
            if (programName == "0") {
                break;
            }

            program.name = programName;

            std::cout << "Enter courses and credits (name, credits, 0 to stop):\n";
            while (true) {
                Course course;

                // Read course name with spaces
                std::cout << "Course name: ";
                std::getline(std::cin >> std::ws, courseName);
                if (courseName == "0") {
                    break;
                }

                std::cout << "Credits: ";
                std::cin >> credits;

                // Clear the input buffer to consume the newline character
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

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
    std::vector<University> universities;
    loadUniversityData(universities);

    // Call function to input university data
    inputUniversityData(universities);

    // Your logic for additional operations like modifying, deleting data
    // ...

    // Display and save university data
    std::cout << "\nList of Universities, Programs, and Courses:\n";
    displayUniversityData(universities);

    saveUniversityData(universities); // Save data to file before exiting the program

    return 0;
}
