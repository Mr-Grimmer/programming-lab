#include <iostream>
using namespace std;

class Fruit {
protected:
    int count;
public:
    Fruit() : count(0) {}
    void setCount(int c) { count = c; }
    int getCount() { return count; }
};

class Apples : public Fruit {
public:
    Apples(int c) { count = c; }
};

class Mangoes : public Fruit {
public:
    Mangoes(int c) { count = c; }
};

int main() {
    Apples a(5);
    Mangoes m(3);

    cout << "Apples: " << a.getCount() << "\nMangoes: " << m.getCount() << "\nTotal Fruits: " << a.getCount() + m.getCount() << endl;
    return 0;
}
