#include <iostream>
#include <string>
using namespace std;

class String {
    string str;

public:
    String(string s = "") : str(s) {}

    void display() {
        cout << str << endl;
    }

    String join(String s1, String s2) {
        return String(s1.str + s2.str);
    }
};

int main() {
    String s1("Hello"), s2(" World"), s3;
    cout << "String 1: ";
    s1.display();
    cout << "String 2: ";
    s2.display();
    s3 = s3.join(s1, s2);
    cout << "Joined String: ";
    s3.display();
    return 0;
}
