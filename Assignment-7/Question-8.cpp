#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Record {
public:
    string name;
    int age;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

void addRecord() {
    ofstream file("records.txt", ios::app);
    Record r;
    r.input();
    file << r.name << " " << r.age << endl;
    file.close();
    cout << "Record added successfully.\n";
}

void viewRecords() {
    ifstream file("records.txt");
    Record r;
    cout << "All Records:\n";
    while (file >> r.name >> r.age) {
        r.display();
    }
    file.close();
}

void searchRecord(string key) {
    ifstream file("records.txt");
    Record r;
    bool found = false;
    while (file >> r.name >> r.age) {
        if (r.name == key) {
            cout << "Record found:\n";
            r.display();
            found = true;
            break;
        }
    }
    if (!found) cout << "Record not found.\n";
    file.close();
}

void deleteRecord(string key) {
    ifstream file("records.txt");
    ofstream temp("temp.txt");
    Record r;
    bool found = false;

    while (file >> r.name >> r.age) {
        if (r.name != key) temp << r.name << " " << r.age << endl;
        else found = true;
    }

    file.close();
    temp.close();
    remove("records.txt");
    rename("temp.txt", "records.txt");

    if (found) cout << "Record deleted.\n";
    else cout << "Record not found.\n";
}

int main() {
    int choice;
    string key;

    do {
        cout << "1. Add Record\n2. View Records\n3. Search Record\n4. Delete Record\n5. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addRecord(); break;
            case 2: viewRecords(); break;
            case 3: cout << "Enter name to search: "; cin >> key; searchRecord(key); break;
            case 4: cout << "Enter name to delete: "; cin >> key; deleteRecord(key); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
