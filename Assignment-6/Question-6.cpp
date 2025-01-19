#include <iostream>
using namespace std;

class Year {
    int year;

public:
    Year(int y) : year(y) {}

    ~Year() {
        cout << "Destructor called for year " << year << endl;
    }

    void checkLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << year << " is a Leap Year." << endl;
        else
            cout << year << " is not a Leap Year." << endl;
    }
};

int main() {
    int y;
    cout << "Enter a year: ";
    cin >> y;
    Year obj(y);
    obj.checkLeapYear();
    return 0;
}
