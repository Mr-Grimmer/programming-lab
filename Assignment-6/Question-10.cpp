#include <iostream>
#include <cmath>
using namespace std;

class Volume {
public:
    // Volume of cube
    double calculate(double a) {
        return a * a * a;
    }

    // Volume of cuboid
    double calculate(double l, double b, double h) {
        return l * b * h;
    }

    // Volume of cone
    double calculate(double r, double h, bool isCone) {
        if (isCone) {
            return (1.0 / 3) * M_PI * r * r * h;
        }
        return 0; // If not a cone, return 0 (default case).
    }

    // Volume of cylinder
    double calculate(double r, double h) {
        return M_PI * r * r * h;
    }

    // Volume of sphere
    double calculateSphere(double r) {
        return (4.0 / 3) * M_PI * r * r * r;
    }
};

int main() {
    Volume v;
    int choice;
    double a, l, b, h, r;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Volume of Cube\n";
        cout << "2. Volume of Cuboid\n";
        cout << "3. Volume of Cone\n";
        cout << "4. Volume of Cylinder\n";
        cout << "5. Volume of Sphere\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter side length of the cube: ";
            cin >> a;
            cout << "Volume of Cube: " << v.calculate(a) << endl;
            break;
        case 2:
            cout << "Enter length, breadth, and height of the cuboid: ";
            cin >> l >> b >> h;
            cout << "Volume of Cuboid: " << v.calculate(l, b, h) << endl;
            break;
        case 3:
            cout << "Enter radius and height of the cone: ";
            cin >> r >> h;
            cout << "Volume of Cone: " << v.calculate(r, h, true) << endl;
            break;
        case 4:
            cout << "Enter radius and height of the cylinder: ";
            cin >> r >> h;
            cout << "Volume of Cylinder: " << v.calculate(r, h) << endl;
            break;
        case 5:
            cout << "Enter radius of the sphere: ";
            cin >> r;
            cout << "Volume of Sphere: " << v.calculateSphere(r) << endl;
            break;
        case 6:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again!" << endl;
        }
    }
}
