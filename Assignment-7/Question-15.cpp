#include <iostream>
using namespace std;

class Student {
public:
    virtual void show() = 0; // Pure virtual function
    virtual ~Student() {}
};

class Engineering : public Student {
public:
    void show() override {
        cout << "I am an Engineering student.\n";
    }
};

class Medicine : public Student {
public:
    void show() override {
        cout << "I am a Medicine student.\n";
    }
};

class Science : public Student {
public:
    void show() override {
        cout << "I am a Science student.\n";
    }
};

int main() {
    Student* students[3]; // Array of pointers to base class

    students[0] = new Engineering();
    students[1] = new Medicine();
    students[2] = new Science();

    for (int i = 0; i < 3; i++) {
        students[i]->show();
    }

    // Free allocated memory
    for (int i = 0; i < 3; i++) {
        delete students[i];
    }

    return 0;
}
