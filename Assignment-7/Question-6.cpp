#include <iostream>
using namespace std;

class Calculator {
public:
    class Operations {
    public:
        static float add(float a, float b) { return a + b; }
        static float sub(float a, float b) { return a - b; }
        static float mul(float a, float b) { return a * b; }
        static float div(float a, float b) { return (b != 0) ? (a / b) : 0; }
    };
};

int main() {
    int choice;
    float x, y;

    do {
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nEnter choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> x >> y;
        }

        switch (choice) {
            case 1: cout << "Result: " << Calculator::Operations::add(x, y) << endl; break;
            case 2: cout << "Result: " << Calculator::Operations::sub(x, y) << endl; break;
            case 3: cout << "Result: " << Calculator::Operations::mul(x, y) << endl; break;
            case 4: cout << "Result: " << Calculator::Operations::div(x, y) << endl; break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
