#include <iostream>
using namespace std;

class Number {
public:
    inline int square(int num) {
        return num * num;
    }
};

int main() {
    Number obj;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square of " << n << " is " << obj.square(n) << endl;
    return 0;
}
