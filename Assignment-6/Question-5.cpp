#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;

public:
    // Constructors
    Complex() : real(0), imaginary(0) {}
    Complex(int r) : real(r), imaginary(0) {}
    Complex(int r, int i) : real(r), imaginary(i) {}

    void show() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex sum(Complex c) {
        return Complex(real + c.real, imaginary + c.imaginary);
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2), c3;
    c3 = c1.sum(c2);
    cout << "First Complex Number: ";
    c1.show();
    cout << "Second Complex Number: ";
    c2.show();
    cout << "Sum: ";
    c3.show();
    return 0;
}
