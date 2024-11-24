#ifndef DATA_BASE_H
#define DATA_BASE_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Database {
private:
    struct Record {
        string name;
        string email;
        string phone;
        string bloodGroup;
        string address;
    };

public:
    void addRecord();
    void viewRecords();
    void searchRecord();
    void deleteRecord();
};

void Database::addRecord() {
    string name, email, phone, bloodGroup, address;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter email: ";
    cin >> email;
    cout << "Enter phone: ";
    cin >> phone;
    cout << "Enter blood group: ";
    cin >> bloodGroup;
    cout << "Enter address: ";
    cin >> address;

    ofstream file("database.txt", ios::app);
    file << name << "," << email << "," << phone << "," << bloodGroup << "," << address << endl;
    file.close();
    cout << "Record added successfully!" << endl;
}

void Database::viewRecords() {
    ifstream file("database.txt");
    string line;

    if (!file) {
        cout << "No records found!" << endl;
        return;
    }

    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void Database::searchRecord() {
    string keyword;
    cout << "Enter keyword to search: ";
    cin >> keyword;

    ifstream file("database.txt");
    string line;

    if (!file) {
        cout << "No records found!" << endl;
        return;
    }

    while (getline(file, line)) {
        if (line.find(keyword) != string::npos) {
            cout << line << endl;
        }
    }
    file.close();
}
#endif  // DATA_BASE_H
