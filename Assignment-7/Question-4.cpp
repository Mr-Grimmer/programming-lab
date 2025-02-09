#include <iostream>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        int findMax(int a, int b, int c) {
            return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        }
    };
};

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    Outer::Inner obj;
    cout << "Greatest: " << obj.findMax(x, y, z) << endl;

    return 0;
}
