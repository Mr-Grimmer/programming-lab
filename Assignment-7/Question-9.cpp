#include <iostream>
using namespace std;

class Mammals {
public:
    void showMammal() {
        cout << "I am a mammal.\n";
    }
};

class MarineAnimals {
public:
    void showMarine() {
        cout << "I am a marine animal.\n";
    }
};

class BlueWhale : public Mammals, public MarineAnimals {
public:
    void showBlueWhale() {
        cout << "I belong to both categories: Mammals as well as Marine Animals.\n";
    }
};

int main() {
    Mammals m;
    MarineAnimals ma;
    BlueWhale bw;

    m.showMammal();
    ma.showMarine();
    bw.showBlueWhale();
    bw.showMammal();
    bw.showMarine();

    return 0;
}
