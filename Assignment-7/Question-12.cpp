#include <iostream>
using namespace std;

class Shape {
public:
    void show() { cout << "This is a shape.\n"; }
};

class Polygon : public Shape {
public:
    void show() { cout << "Polygon is a shape.\n"; }
};

class Rectangle : public Polygon {
public:
    void show() { cout << "Rectangle is a polygon.\n"; }
};

class Triangle : public Polygon {
public:
    void show() { cout << "Triangle is a polygon.\n"; }
};

class Square : public Rectangle {
public:
    void show() { cout << "Square is a rectangle.\n"; }
};

int main() {
    Shape s;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square sq;

    s.show();
    p.show();
    r.show();
    t.show();
    sq.show();

    return 0;
}
