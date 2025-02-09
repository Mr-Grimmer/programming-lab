#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    void input() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    void displayIfSquare() {
        if (length == breadth) {
            cout << "Square with side " << length << endl;
        }
    }
};

int main() {
    Rectangle rects[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for rectangle " << i + 1 << ":\n";
        rects[i].input();
    }

    cout << "\nSquares among given rectangles:\n";
    for (int i = 0; i < 5; i++) {
        rects[i].displayIfSquare();
    }

    return 0;
}
