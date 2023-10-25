#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "Welcome, Admission Candidate!" << endl;

    ifstream updatesFile("admission_updates.txt");

    if (updatesFile.is_open()) {
        string line;
        cout << "Hall Updates for Admission Candidates:\n";
        while (getline(updatesFile, line)) {
            cout << line << endl;
        }
        updatesFile.close();
    } else {
        cerr << "Hall updates for Admission Candidates not found." << endl;
    }

    return 0;
}
