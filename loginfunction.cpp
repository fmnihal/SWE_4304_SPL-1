
#include <iostream>
#include <fstream>
#include <string>
#include <map>

// Function to save username and password to a file
void saveCredentials(const std::string& username, const std::string& password) {
    std::ofstream file("credentials.txt", std::ios::app);
    if (file.is_open()) {
        file << username << " " << password << std::endl;
        std::cout << "Registration successful. You can now log in.\n";
        file.close();
    } else {
        std::cout << "Error: Unable to save credentials.\n";
    }
}

// Function to authenticate user based on saved credentials
bool authenticateUser(const std::string& username, const std::string& password) {
    std::ifstream file("credentials.txt");
    if (file.is_open()) {
        std::string savedUsername, savedPassword;
        while (file >> savedUsername >> savedPassword) {
            if (savedUsername == username && savedPassword == password) {
                return true;
            }
        }
        file.close();
    }
    return false;
}

int main() {
    int choice;
    std::string username, password;

    std::cout << "Welcome to the Login System\n";
    std::cout << "1. Register\n";
    std::cout << "2. Login\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter username: ";
        std::cin >> username;
        std::cout << "Enter password: ";
        std::cin >> password;
        saveCredentials(username, password);
    } else if (choice == 2) {
        std::cout << "Enter username: ";
        std::cin >> username;
        std::cout << "Enter password: ";
        std::cin >> password;
        if (authenticateUser(username, password)) {
            std::cout << "Login successful. Welcome, " << username << "!\n";
            // Add your application logic here after successful login
        } else {
            std::cout << "Login failed. Invalid username or password.\n";
        }
    } else {
        std::cout << "Invalid choice.\n";
    }

    return 0;
}
