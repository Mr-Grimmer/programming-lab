#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double salary;
    
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayIfAbove50k() {
        if (salary > 50000) {
            cout << "ID: " << id << ", Name: " << name << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        emp[i].input();
    }

    cout << "\nEmployees with salary above 50,000:\n";
    for (int i = 0; i < n; i++) {
        emp[i].displayIfAbove50k();
    }

    return 0;
}