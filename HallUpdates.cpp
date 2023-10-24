//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    ifstream hallUpdatesFile("hall_updates.txt");
//
//    if (hallUpdatesFile.is_open()) {
//        string line;
//        cout << "Hall Updates:\n";
//        while (getline(hallUpdatesFile, line)) {
//            cout << line << endl;
//        }
//        hallUpdatesFile.close();
//    } else {
//        cerr << "Hall updates not available at the moment." << endl;
//    }
//
//    return 0;
//}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    char studentType;
    cout << "Are you an admission candidate (A) or a running undergraduate student (U)? ";
    cin >> studentType;

    if (studentType == 'U' || studentType == 'u') {
        ifstream hallUpdatesFile("hall_updates.txt");

        if (hallUpdatesFile.is_open()) {
            string line;
            cout << "Hall Updates:\n";
            while (getline(hallUpdatesFile, line)) {
                cout << line << endl;
            }
            hallUpdatesFile.close();
        } else {
            cerr << "Hall updates not available at the moment." << endl;
        }
    } else {
        cout << "This feature is only available for running undergraduate students." << endl;
    }

    return 0;
}
