#include <iostream>
#include <algorithm>
using namespace std;

class String {
    string str;

public:
    String(string s = "") : str(s) {}

    String operator+(String &s2) {
        return String(str + s2.str);
    }

    void reverse() {
        std::reverse(str.begin(), str.end());
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello"), s2("World"), s3;
    s3 = s1 + s2;
    cout << "Concatenated String: ";
    s3.display();
    s3.reverse();
    cout << "Reversed Concatenated String: ";
    s3.display();
    return 0;
}
