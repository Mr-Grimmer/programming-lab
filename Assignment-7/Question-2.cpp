#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks[3];

    void input(int r) {
        rollNo = r;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter marks in three subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    float getAverage() {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }

    char getGrade() {
        float avg = getAverage();
        if (avg > 80) return 'A';
        else if (avg > 70) return 'B';
        else if (avg > 60) return 'C';
        else if (avg > 50) return 'D';
        else if (avg > 40) return 'E';
        else return 'F';
    }

    void display() {
        cout << "Name: " << name << ", Average: " << getAverage() << ", Grade: " << getGrade() << endl;
    }
};

int main() {
    Student students[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        students[i].input(i + 1);
    }

    cout << "\nStudent Results:\n";
    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}
