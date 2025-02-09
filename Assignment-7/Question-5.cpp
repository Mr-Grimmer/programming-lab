#include <iostream>
#define PI 3.14159
using namespace std;

class Circle {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}

    class Area {
    public:
        static float compute(Circle c) {
            return PI * c.radius * c.radius;
        }
    };
};

int main() {
    float r;
    cout << "Enter radius: ";
    cin >> r;

    Circle c(r);
    cout << "Area: " << Circle::Area::compute(c) << endl;

    return 0;
}
