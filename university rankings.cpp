#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct University {
    string name;
    int ranking;
};

bool compareByRanking(const University &a, const University &b) {
    return a.ranking < b.ranking;
}

void saveUniversityData(const vector<University> &universities) {
    ofstream file("universities.txt");
    if (file.is_open()) {
        for (const auto &uni : universities) {
            file << uni.name << " " << uni.ranking << endl;
        }
        cout << "University data saved to universities.txt\n";
        file.close();
    } else {
        cout << "Error: Unable to save university data.\n";
    }
}

int main() {
    vector<University> universities;

    // Read existing universities from file
    ifstream file("universities.txt");
    if (file.is_open()) {
        string name;
        int ranking;
        while (file >> name >> ranking) {
            universities.push_back({name, ranking});
        }
        file.close();
    } else {
        cout << "Error: Unable to read university data.\n";
    }

    string name;
    int ranking;

    cout << "Enter new university data (name and ranking, 0 to stop):\n";

    // Input new university data
    while (true) {
        cout << "University name: ";
        cin >> name;
        if (name == "0") {
            break;
        }
        cout << "Ranking: ";
        cin >> ranking;
        universities.push_back({name, ranking});
    }

    // Sort universities by ranking
    sort(universities.begin(), universities.end(), compareByRanking);

    // Display sorted universities
    cout << "\nSorted University Rankings:\n";
    for (const auto &uni : universities) {
        cout << uni.name << " - Ranking: " << uni.ranking << endl;
    }

    // Save university data to a file
    saveUniversityData(universities);

    return 0;
}
