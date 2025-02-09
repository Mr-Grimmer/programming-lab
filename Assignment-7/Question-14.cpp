#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Employee : virtual public Person {
public:
    int salary;
};

class Student : virtual public Person {
public:
    int marks;
};

class Manager : public Employee, public Student {
public:
    void show() {
        cout << "Name: " << name << ", Salary: " << salary << ", Marks: " << marks << endl;
    }
};

int main() {
    Manager m;
    m.name = "Alice";
    m.salary = 50000;
    m.marks = 90;
    m.show();
    return 0;
}
