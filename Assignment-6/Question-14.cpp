#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) : value(v) {}

    friend void swap(Number &a, Number &b);

    void display() {
        cout << value << endl;
    }
};

void swap(Number &a, Number &b) {
    a.value = a.value + b.value;
    b.value = a.value - b.value;
    a.value = a.value - b.value;
}

int main() {
    Number n1(10), n2(20);
    cout << "Before Swap:" << endl;
    n1.display();
    n2.display();

    swap(n1, n2);

    cout << "After Swap:" << endl;
    n1.display();
    n2.display();

    return 0;
}
