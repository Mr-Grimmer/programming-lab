#include <iostream>
using namespace std;

class Calculator {
public:
    void calculate(int m, char ch) {
        if (m <= 9) {
            cout << "Number of digits in m should be greater than 1." << endl;
            return;
        }

        if (ch == 'r') {
            int reversed = 0, temp = m;
            while (temp != 0) {
                reversed = reversed * 10 + temp % 10;
                temp /= 10;
            }
            cout << "Reversed Number: " << reversed << endl;
        } else if (ch == 'p') {
            bool isPrime = true;
            if (m < 2)
                isPrime = false;
            for (int i = 2; i <= m / 2; ++i) {
                if (m % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            cout << m << (isPrime ? " is a Prime Number." : " is not a Prime Number.") << endl;
        } else {
            cout << "Invalid character input." << endl;
        }
    }
};

int main() {
    Calculator obj;
    int num;
    char choice;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter 'r' for reverse or 'p' for prime check: ";
    cin >> choice;
    obj.calculate(num, choice);

    return 0;
}
