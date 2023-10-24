
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to save username and password to a file
void saveCredentials(const string& username, const string& password) {
    ofstream file("credentials.txt", ios::app);
    if (file.is_open()) {
        file << username << " " << password << endl;
        cout << "Registration successful. You can now log in.\n";
        file.close();
    } else {
        cout << "Error: Unable to save credentials.\n";
    }
}

// Function to authenticate user based on saved credentials
bool authenticateUser(const string& username, const string& password) {
    ifstream file("credentials.txt");
    if (file.is_open()) {
        string savedUsername, savedPassword;
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
    string username, password;

    cout << "Welcome to the Login System\n";
    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        saveCredentials(username, password);
    } else if (choice == 2) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        if (authenticateUser(username, password)) {
            cout << "Login successful. Welcome, " << username << "!\n";
            // Add your application logic here after successful login
        } else {
            cout << "Login failed. Invalid username or password.\n";
        }
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
