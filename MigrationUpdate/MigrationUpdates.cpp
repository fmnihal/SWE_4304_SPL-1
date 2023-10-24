#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string programName;
    
    cout << "Select your program to view migration updates:\n";
    cout << "1. CSE\n";
    cout << "2. SWE\n";
    cout << "3. EEE\n";
    cout << "4. MPE\n";
    cout << "5. Civil\n";
    cout << "6. IPE\n";
    cout << "7. BTM\n";
    cout << "Enter the number of your program: ";
    
    int programNumber;
    cin >> programNumber;

    switch (programNumber) {
        case 1:
            programName = "CSE";
            break;
        case 2:
            programName = "SWE";
            break;
        case 3:
            programName = "EEE";
            break;
        case 4:
            programName = "MPE";
            break;
        case 5:
            programName = "Civil";
            break;
        case 6:
            programName = "IPE";
            break;
        case 7:
            programName = "BTM";
            break;
        default:
            cerr << "Invalid program selection." << endl;
            return 1;
    }

    string fileName = programName + "_migration_updates.txt";
    ifstream migrationUpdateFile(fileName);

    if (migrationUpdateFile.is_open()) {
        string line;
        cout << "Migration Updates for " << programName << ":\n";
        while (getline(migrationUpdateFile, line)) {
            cout << line << endl;
        }
        migrationUpdateFile.close();
    } else {
        cerr << "Migration updates for " << programName << " not found." << endl;
    }

    return 0;
}
