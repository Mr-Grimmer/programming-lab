#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;  // Pure virtual function
    virtual ~Shape() { cout << "Shape Destructor\n"; }
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}
    void area() override { cout << "Area of Circle: " << 3.14 * radius * radius << endl; }
    ~Circle() { cout << "Circle Destructor\n"; }
};

int main() {
    Shape* s = new Circle(5);
    s->area();
    delete s;
    return 0;
}
