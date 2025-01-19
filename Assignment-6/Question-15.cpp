#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;

public:
    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}

    friend Complex add(Complex &c1, Complex &c2);

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

Complex add(Complex &c1, Complex &c2) {
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

int main() {
    Complex c1(3, 4), c2(1, 2), c3;
    c3 = add(c1, c2);

    cout << "First Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    cout << "Sum: ";
    c3.display();

    return 0;
}
