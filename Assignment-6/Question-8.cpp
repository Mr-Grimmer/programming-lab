#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    // Parameterized Constructor
    Demo(int a) : x(a) {
        cout << "Parameterized Constructor called with value: " << x << endl;
    }

    // Copy Constructor
    Demo(const Demo& d) : x(d.x) {
        cout << "Copy Constructor called with value: " << x << endl;
    }

    // Virtual Destructor
    virtual ~Demo() {
        cout << "Destructor called for value: " << x << endl;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1; // Copy Constructor
    d1.display();
    d2.display();
    return 0;
}
